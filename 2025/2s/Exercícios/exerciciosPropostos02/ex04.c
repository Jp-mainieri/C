#include  <stdio.h>

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    //scanf("%d",&A;
    //scanf("%d",&B);
    //scanf("%d",&C);
    if (A + B > C && A + C > B && B + C > A)
    {
        printf("Triangulo valido");
    }else
    {
        printf("Triangulo invalido");
    }
}