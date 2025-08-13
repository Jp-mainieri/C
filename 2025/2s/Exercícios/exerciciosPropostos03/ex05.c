#include <stdio.h>
#include <stdbool.h>
void main()
{
    int n1,n2,n3,n4,n5,temp;
    printf("Enter 5 numbers:\n");
    scanf("%d)",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    bool mustStop = false;
    while (mustStop == false)
    {
        printf("%d,%d,%d,%d,%d\n",n1,n2,n3,n4,n5);
        mustStop = true;
        if (n1 > n2)
        {

            temp = n2;
            n2 = n1;
            n1 = temp;
            mustStop = false;
        }
        if (n2 > n3)
        {
            temp = n3;
            n3 = n2;
            n2 = temp;
            mustStop = false;
        }
        if (n3 > n4)
        {
            temp = n4;
            n4 = n3;
            n3 = temp;
            mustStop = false;
        }
        if (n4 > n5)
        {
            temp = n5;
            n5 = n4;
            n4 = temp;
            mustStop = false;
        }
    }
    printf("Os numeros ordenados sao:\n");
    printf("%d,%d,%d,%d,%d\n",n1,n2,n3,n4,n5);
}