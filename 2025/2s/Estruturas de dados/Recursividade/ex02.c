// função recursiva que recebe um inteiro e retorna o seu fatorial

#include <stdio.h>

int fatorial(int num)
{
    if (num == 1) return 1;
    else return (num * fatorial(num - 1));
}

int main(){
    int n;
    printf("Digite o numero para ser tranformado em seu fatorial: ");
    scanf("%d",&n);
    int resultado = fatorial(n);
    printf("O fatorial de %d é: %d",n,resultado);
    return 0;
}