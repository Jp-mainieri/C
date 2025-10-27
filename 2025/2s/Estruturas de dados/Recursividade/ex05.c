#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubblePass(int v[], int vecSize, int i)
{
    if (i >= vecSize -1) return;
    if (v[i] > v[i + 1]) swap(&v[i],&v[i + 1]);
    bubblePass(v, vecSize, i +1);
}

void sortVet(int v[], int vecSize)
{
    if (vecSize <= 1) return;
    bubblePass(v,vecSize,0);
    sortVet(v,vecSize - 1);
}

int main(void)
{
    int v[] = {5, 3, 8, 4, 1};
    int vecSize = sizeof(v) / sizeof(v[0]);

    printf("Antes:\n");
    for (int i = 0; i < vecSize; ++i) printf("%d ", v[i]);
    printf("\n");

    sortVet(v, vecSize);

    printf("Depois:\n");
    for (int i = 0; i < vecSize; ++i) printf("%d ", v[i]);
    printf("\n");
    return 0;
}

