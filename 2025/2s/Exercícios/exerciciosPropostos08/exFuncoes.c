#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

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
        printf("%d \t",vec[i]);
    }
    printf("\n");
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
void SeparaParImpar(int sz, int vec[sz], int vPar[sz], int vImpar[sz], int *szPar, int *szImpar){
    for(int i = 0; i < sz; i++){
        if(vec[i] % 2 == 0){
            vPar[*szPar] = vec[i];
            (*szPar)++;
        }else{
            vImpar[*szImpar] = vec[i];
            (*szImpar)++;
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
                Mult[i][j] = 0; // Inicializa cada espaço da matriz com 0
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
    char string[20];
    printf("\n=========================\n"
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
           "00- Sair.\n"
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
        printf("Insira uma string de no máximo 20 caracteres: ");
        scanf(" %[^\n]",string);
        number = sizeOfString(string);
        printf("%d",number);
        break;
    case 6:
        char c;
        printf("Insira uma string de no máximo 20 caracteres: ");
        scanf(" %[^\n]",string);
        printf("Insira o caractere para a contagem: ");
        scanf(" %c",&c);
        number = countChar(string, c);
        printf("%d",number);
        break;
    case 7:
        char copy[20];
        printf("Insira uma string de no máximo 20 caracteres: ");
        scanf(" %[^\n]",string);
        copyString(string,copy);
        printf("String: %s\nCopy: %s", string, copy);
        break;
    case 8:
        printf("Insira uma string de no máximo 20 caracteres: ");
        scanf(" %[^\n]",string);
        if (isPalindrome(string) == 1) printf("(%s) É um palíndromo",string); else printf("(%s) Não é um palíndromo",string);
        break;
    case 9:
        printf("Insira uma string de no máximo 20 caracteres: ");
        scanf(" %[^\n]",string);
        toUpperCase(string);
        printf("%s",string);
        break;
    case 10: {
        int sz;
        printf("Qual o tamanho do vetor? ");
        scanf("%d",&sz);
        int vec[sz];
        for (int i = 0; i < sz; i++) {
            printf("Insira um número: ");
            scanf("%d",&vec[i]);
        }
        PrintVector(sz,vec);
        break;
    }
    case 11:
        int a,b;
        printf("Insira um número para a variavel A: ");
        scanf("%d",&a);
        printf("Insira um número para a variavel B: ");
        scanf("%d",&b);
        Swap(&a, &b);
        printf("A = %d\nB= %d",a,b);
        break;
    case 12:{
        int sz;
        printf("Qual o tamanho do vetor? ");
        scanf("%d",&sz);
        int vec[sz];
        for (int i = 0; i < sz; i++) {
            printf("Insira um número: ");
            scanf("%d",&vec[i]);
        }
        OrdenarCrescente(sz,vec);
        PrintVector(sz, vec);
        break;
    }
    case 13:{
        int sz;
        printf("Qual o tamanho do vetor? ");
        scanf("%d",&sz);
        int vec[sz];
        for (int i = 0; i < sz; i++) {
            printf("Insira um número: ");
            scanf("%d",&vec[i]);
        }
        int vPar[sz], vImpar[sz];
        int szPar = 0, szImpar = 0;
        //int sz, int vec[sz], int vPar[sz], int vImpar[sz], int *szPar, int *szImpar
        SeparaParImpar(sz, vec, vPar, vImpar, &szPar, &szImpar);
        PrintVector(szPar,vPar);
        PrintVector(szImpar,vImpar);
        break;
    }
    case 14:{
        int rows,cols;
        printf("Qual o tamanho da Matriz (Linhas)? ");
        scanf("%d",&rows);
        printf("Qual o tamanho da Matriz (Colunas)? ");
        scanf("%d",&cols);
        int mat[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++){
            printf("Insira um número: ");
            scanf("%d",&mat[i][j]);
        }
        }
        //int nRows, int nCols, int matrix[nRows][nCols]
        PrintMatrix(rows,cols,mat);
        break;
    }
    case 15:{
            int rowsA,colsA;
            bool ePossivel;
            printf("Qual o tamanho da Matriz (Linhas)? ");
            scanf("%d",&rowsA);
            printf("Qual o tamanho da Matriz (Colunas)? ");
            scanf("%d",&colsA);
            int matA[rowsA][colsA];
            for (int i = 0; i < rowsA; i++) {
                for (int j = 0; j < colsA; j++){
                    printf("Insira um número: ");
                    scanf("%d",&matA[i][j]);
                }
            }
            int rowsB,colsB;
            printf("Qual o tamanho da Matriz (Linhas)? ");
            scanf("%d",&rowsB);
            printf("Qual o tamanho da Matriz (Colunas)? ");
            scanf("%d",&colsB);
            int matB[rowsB][colsB];
            for (int i = 0; i < rowsB; i++) {
                for (int j = 0; j < colsB; j++){
                    printf("Insira um número: ");
                    scanf("%d",&matB[i][j]);
                }
            }
            int mult[rowsA][colsB];
            // Multiplicacao De Matriz
            //int linhasA, int colunasA, int A[linhasA][colunasA], int linhasB, int colunasB, int B[linhasB][colunasB], int Mult[linhasA][colunasB]
            ePossivel = MultMatrix(rowsA,colsA,matA,rowsB,colsB,matB,mult);
            ePossivel ? PrintMatrix(rowsA,colsB,mult) : printf("Não foi possivel multiplicar essas matrizes");
            break;
    }
    default:
        return false;
        break;
    }
    return true;
}
int main()
{
    EscolherExercício();
    return 0;
}