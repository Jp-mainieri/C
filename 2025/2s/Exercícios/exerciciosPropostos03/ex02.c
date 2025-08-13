#include <stdio.h>

void main()
{
    int num,count = 0,bignum = 0,smallnum;

    while (num != 0)
    {
        scanf("%d",&num);
        if (num > bignum)
        {
            bignum = num;
        }
        if (num < smallnum)
        {
            smallnum = num;
        }
        count++;
    }
    printf("A contagem eh %d\n",count);
    printf("O maior numero eh %d\n",bignum);
    printf("O menor numero eh %d\n",smallnum);
}