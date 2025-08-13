#include <stdio.h>

void main()
{
    int num,res = 1;

    do{
        res = 1;
        printf("Insert a number: ");
        scanf("%d",&num);
        for (int i = 1; i <= num; i++)
        {
            res = res * i;
        }
        printf("- %d factorial = %d\n",num,res);
    }while (num >= 0);
}