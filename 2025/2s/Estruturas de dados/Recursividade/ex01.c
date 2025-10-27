#include <stdio.h>

int somaAteN(int num)
{
    if(num == 1) return 1;
    else return (num + somaAteN(num - 1));
}

int main()
{
    int n;
    printf("Digite o numero: ");
    scanf("%d",&n);
    int resultado = somaAteN(n);
    printf("O resultado da soma dos numeros até %d é %d",n ,resultado);
    return 0;
}