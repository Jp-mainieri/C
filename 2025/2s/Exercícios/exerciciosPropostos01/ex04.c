//Indice IMC

#include <stdio.h>

int main(){
    float imc;
    double peso, altura;

    printf("Peso (Kg):");
    scanf("%lf",&peso);
    printf("Altura (m): ");
    scanf("%lf",&altura);

    imc = peso / (altura * altura);

    printf("Com o peso %lf e altura %lf, seu IMC é de %f",peso,altura,imc);

    return 0;
}