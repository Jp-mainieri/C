#include <stdio.h>

int main(){
    double salarioMensal;
    double percentualReajuste;
    double novoSalario;

    printf("Salário Mensal: ");
    scanf("%lf",&salarioMensal);
    printf("Percentual de reajuste:");
    scanf("%lf",&percentualReajuste);

    novoSalario = salarioMensal * (1 +percentualReajuste / 100);
    
    
    printf("O salario mensal era R$ %.2f, com o reajuste de %%%.2f o novo salário ficou: R$ %.2f",salarioMensal,percentualReajuste,novoSalario);
    return 0;
}