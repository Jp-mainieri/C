#include  <stdio.h>

int main()
{
    int option;
    float n1,n2,resultado;
    printf("Menu ------------\n"
           "1 - Adicao\n"
           "2 - Subtracao\n"
           "3 - Multiplicacao\n"
           "4 - Divisao\n"
           ">");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        printf("Insira dois numeros reais:\n");
        scanf("%f %f",&n1,&n2);
        resultado = n1 + n2;
        break;
    case 2:
        printf("Insira dois numeros reais:\n");
        scanf("%f %f",&n1,&n2);
        resultado = n1 - n2;
        break;
    case 3:
        printf("Insira dois numeros reais:\n");
        scanf("%f %f",&n1,&n2);
        resultado = n1 * n2;
        break;
    case 4:
        printf("Insira dois numeros reais:\n");
        scanf("%f %f",&n1,&n2);
        resultado = n1 + n2;
        break;
    default:
        printf("Opcao Invalida");
        break;
    }
    printf("Resultado = %.2f",resultado);
    return 0;
}