#include <stdio.h>
#include <stdbool.h>

bool isPrimeRec(int num,int divisor)
{
    if (divisor == 1) return true;
    if (num % divisor == 0) return false;
    else return isPrimeRec(num, divisor - 1);
}

bool isPrime(int num)
{
    if (num <= 2) return (num == 2);
    else return isPrimeRec(num,num - 1);
}

int countPrimes(int num)
{
    if (num < 2) return 0;
    if (isPrime(num)) return countPrimes(num - 1) + 1;
    else return countPrimes(num - 1 );
}

void fillVet(int v[],int vsize,int num)
{
    if (vsize <= 0 || num < 2) return;
    if (isPrime(num))
    {
        v[vsize - 1] = num;
        fillVet(v, vsize - 1, num - 1);
    }else
    {
        fillVet(v, vsize, num - 1);
    }
}



int main()
{
    int n;
    printf("Digite o numero para retornar o vetor de primos até ele: ");
    scanf("%d",&n);
    int pCount = countPrimes(n);
    if (pCount == 0)
    {
        printf("nenhum primo até %d",n);
        return 0;
    }

    int vetPrimes[pCount];
    fillVet(vetPrimes,pCount,n);
    printf("Primos até %d:\n",n);
    for (int i = 0; i < pCount; i++)
    {
        printf("%d\t",vetPrimes[i]);
    }

    return 0;
}