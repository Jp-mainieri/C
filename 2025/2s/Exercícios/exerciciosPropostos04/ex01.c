#include <stdio.h>
int main()
{
    int n;
    do{
        printf("Digite quantas multiplicacoes voce quer fazer: ");
        scanf("%d",&n);
        if (n < 1 || n > 20)
        {
            printf("Numero invalido. Deve ser entre 1 e 20.\n");
        }
    }while (n < 1 || n > 20);
    int x[n],y[n],z[n];
    for (int i = 0; i < n;i++)
    {
        printf("\nDigite o primeiro numero: ");
        scanf("%d",&x[i]);
        printf("\nDigite o segundo numero: ");
        scanf("%d",&y[i]);
        z[i] = x[i] * x[i];
    }
    printf("Vetores:\n");
    printf("X = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n Y = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",y[i]);
    }
    printf("\n Z = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",z[i]);
    }
    return 0;
}