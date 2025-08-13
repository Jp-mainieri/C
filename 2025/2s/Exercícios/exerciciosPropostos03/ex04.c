#include <stdio.h>

void main()
{
    int senha = 1234,tentativa;
    printf("Digite a senha de 4 digitos: ");

    for (int t = 0; t < 3; t++)
    {
        scanf("%d",&tentativa);
        if (tentativa == senha)
        {
            printf("Acesso liberado\n");
            break;
        }
        else
        {
            printf("Acesso negado\n");
        }
        if (t == 2)
        {
            printf("Usuario Bloquado!\n");
        }
        else
        {
            printf("Tente novamente, tentativa %d/3\n",t+1);
        }
    }
}