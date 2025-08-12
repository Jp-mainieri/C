#include <stdio.h>
int main()
{
    float nota;
    while (nota >= 0) {
        printf("Insert your grade: ");
        scanf("%f",&nota);
        if (nota < 5)
        {
            printf("Insuficcient Grade");
        }else if (nota >= 5 && nota < 7)
        {
            printf("Regular Grade");
        }else if (nota >= 7 && nota < 9)
        {
            printf("Good Grade");
        }else
        {
            printf("Excelent Grade");
        }
        printf("\n");
    }
    return 0;
}