#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

//01
bool isEven(int number) {
    return number % 2 == 0;
}
//02
float scanRealNum() {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    return number;
}
float fractionalPart() {
    float number = scanRealNum();
    return number - (int)number;
}
//03
int fatorial() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int fatorial = 1;
    for (int i = 1; i <= number; i++) {
        fatorial *= i;
}
    return fatorial;
}
//04
int isEvenBetween(int a,int b){
    if(a>b){ //troca os valores caso a seja maior que b
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}
//05
int sizeOfString(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}
//06
int countChar(char str[], char c){
    int count = 0;
    for(int i = 0; i <= strlen(str); i++){
        if(str[i] == c){
            count++;
        }
    }
    return count;
}
//07
void copyString(char str[],char copy[]){
    int i = 0;
    do{
        copy[i] = str[i];
    }while(str[i++] != '\0');
}
//08
int isPalindrome(char str[]){
    int len = sizeOfString(str);
    for(int i = 0; i < len / 2; i++){
        if(tolower(str[i]) != tolower(str[len - i - 1])){
            return 0;
        }
    }
    return 1;
}
//09
void toUpperCase(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
}
//10
void PrintVector(int sz, int vec[sz]){
    for(int i = 0; i < sz; i++){
        printf("%d \n",vec[i]);
    }
}
//11
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//12
void OrdenarCrescente(int sz, int vec[sz]){//bubble sort
    bool swapped = true;
    while(swapped){
        swapped = false;
        for(int j = 0; j < sz -1; j++){
            if(vec[j] > vec[j + 1]){
                Swap(&vec[j], &vec[j + 1]);
                swapped = true;
            }
        }
    }
}
//13
void SeparaParImpar(int sz, int vec[sz], int vPar[], int vImpar[], int *szPar, int *szImpar){
    *szPar = 0;
    *szImpar = 0;
    for(int i = 0; i < sz; i++){
        if(vec[i] % 2 == 0){
            vPar[*szPar] = vec[i];
            *szPar++;
        }else{
            vImpar[*szImpar] = vec[i];
            *szImpar++;
        }
    }
}

//14
void PrintMatrix(int nRows, int nCols, int matrix[nRows][nCols]){
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
//15
bool MultMatrix(int linhasA, int colunasA, int A[linhasA][colunasA], int linhasB, int colunasB, int B[linhasB][colunasB], int Mult[linhasA][colunasB])
{
    if (colunasA != linhasB)
    {
        return false;
    }else
    {
        for (int i = 0; i < linhasA; i++)
        {
            for (int j = 0; j < colunasB; j++)
            {
                for (int k = 0; k < colunasA; k++)
                Mult[i][j] += (A[i][k] * B[k][j]);
            }
        }
        return true;
    }

}
int scanNum()
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    return num;
}
bool EscolherExercício()
{
    int opcao;
    int number;
    printf("=========================\n"
           "ESCOLHA O EXERCÍCIO QUE DESEJA RODAR:\n\n"
           "01- Retorna se um inteiro é par.\n"
           "02- Le um numero real e retorna a parte fracionária.\n"
           "03- Retorna o fatorial de um inteiro positivo.\n"
           "04- Escreve os números pares entre A e B.\n"
           "05- Retorna o tamanho de uma string.\n"
           "06- Retorna a quantidade de vezes que um caractere aparece em uma string.\n"
           "07- Copia uma string para outra.\n"
           "08- Retorna se uma string é um palindromo.\n"
           "09- Converte todos os caracteres de uma string para maiusculos.\n"
           "10- Imprime um vetor.\n"
           "11- Faz swap entre dois inteiros.\n"
           "12- Ordenação crescente de vetor.\n"
           "13- Separa elementos de um vetor em pares e impares.\n"
           "14- Imprime uma matriz.\n"
           "15- Multiplicacao de matrizes (A*B = C).\n"
           "16- Sair.\n"
           ">"
           );
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        number = scanNum();
        if (isEven(number))
        {
            printf("É Par");
        }else
        {
            printf("É Impar");
        }
        break;
    case 2:
        float frac;
        frac = fractionalPart();
        printf("A parte fracionária do seu número é %f",frac);
        break;
    case 3:
        number = fatorial();
        printf("%d",number);
        break;
    case 4:
        int A = scanNum(), B = scanNum();
        isEvenBetween(A,B);
        break;
    case 5:
        char string[20];
        printf("Insira uma string de no máximo 20 caracteres: ");
        scanf(" %[^\n]",string);
        number = sizeOfString(string);
        printf("%d",number);
        break;
        /*
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
    case 1:

        break;
        */
    default:
        return false;
        break;
    }
    return true;
}
int main()
{
    bool continuar;
    do
    {
    continuar = EscolherExercício();
    }while (continuar);
    return 0;
}