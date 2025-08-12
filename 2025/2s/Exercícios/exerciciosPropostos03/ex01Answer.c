#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool ePrimo = true;
    int numero;
    int i = 2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    if (numero < 2) {
        ePrimo = false;
    } else {
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                ePrimo = false;
                break;
            }
        }
    }

    if (ePrimo)
    {
        printf("O numero %d eh primo\n",numero);
    } else
        {
        printf("O numero %d nao eh primo\n",numero);
    }
}