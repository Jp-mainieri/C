// função recursiva que recebe um inteiro e retorna se é primo ou não

#include <stdio.h>
#include <stdbool.h>

bool isPrimeRec(int num, int divisor)
{
    if (num == 1) return true;
    if (num % divisor == 0) return false;
    else return isPrimeRec(num, divisor-1);
}

bool isPrime(int num)
{
    if (num <= 2) return (num == 2);
    else return isPrimeRec(num, num - 1);
}

int main(){
    int n;
    printf("Digite o numero para verificar se é primo: ");
    scanf("%d",&n);
    if (isPrime(n)) printf("O numero %d é primo",n);
    else printf("O numero %d não é primo",n);

    return 0;
}