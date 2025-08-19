#include <stdio.h>

int main(){
    int n,maior = -1000000,menor = 1000000;
    do
    {
        printf("Digite quantos valores voce quer inserir: ");
        scanf("%d", &n);
        if (n < 1 || n > 20)
        {
            printf("Numero invalido. Deve ser entre 1 e 20.\n");
        }
    }while (n < 1 || n > 20);
    int x[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x[i]);
        if (x[i] > maior)
        {
            maior = x[i];
        }
        if (x[i] < menor)
        {
            menor = x[i];
        }
    }
    printf("X = ");;
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\nMaior = %d", maior);
    printf("\nMenor = %d\n", menor);

    return 0;
}