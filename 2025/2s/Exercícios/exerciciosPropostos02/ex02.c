#include <stdio.h>

int main()
{
    int idade;
    float peso;
    printf("Digite sua idade: ");
    scanf("%i",&idade);
    printf("Digite sua peso: ");
    scanf("%f",&peso);
    if ((16 <= idade && idade <= 69) && (peso >= 50))
    {
        printf("You can be a blood donator!");
    }else
    {
        printf("You can't be a blood donator");
    }
    return 0;
}