#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Pessoas:
typedef struct
{
    char nome[50];
    int idade;
}Pessoa;

void printPessoa(Pessoa *p)
{
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
}

char *maisVelho(Pessoa *p1, Pessoa *p2)
{
    if (p1->idade > p2->idade)
    {
        return p1->nome;
    }else if (p1->idade < p2-> idade)
    {
        return p2->nome;
    }else
    {
        return "mesma idade";
    }
}

bool adulto(const Pessoa *p)
{
    return p->idade >= 18;
}

void mostrarPessoas(Pessoa pessoas[],const int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Nome %d: %s\n", i+1, pessoas[i].nome);
    }
}

int procurarPessoa(Pessoa pessoas[],const int tamanho,const char *alvo)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(pessoas[i].nome, alvo) == 0)
        {
        return i;
        }
    }
        return -1;
}

char *pessoaMaisVelha(Pessoa pessoas[],const int tamanho)
{
    int indiceMaisVelho = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (pessoas[i].idade > pessoas[indiceMaisVelho].idade)
        {
          indiceMaisVelho = i;
        }
    }
    return pessoas[indiceMaisVelho].nome;
}
void ordenarPorNome(Pessoa pessoas[], int tamanho)
{
    bool trocou;

    do{
        trocou = false;
    for (int i = 0; i < tamanho-1; i++)
    {
        if (strcmp(pessoas[i].nome,pessoas[i+1].nome) > 0)
        {
            Pessoa temp = pessoas[i];
            pessoas[i] = pessoas[i+1];
            pessoas[i+1] = temp;
            trocou = true;
        }
    }
    }while (trocou);
}

//Alunos:
typedef struct
{
    char nome[50];
    float notas[3];
}Aluno;

void lerDados(Aluno *a)
{
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]",a->nome);
    printf("Digite as notas do aluno");
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a %da nota: ",i+1);
        scanf("%f",&a->notas[i]);
    }
}

float calcularMedia(Aluno *a)
{
    return (a->notas[0] + a->notas[1] + a->notas[2])/3;
}

bool aprovado(Aluno *a)
{
    return 6 <= calcularMedia(a);
}

//Turma:
typedef struct{
    Aluno alunos[30];
    int quantidade;
}Turma;

void melhoresAlunos(Turma *t,Aluno *melhores, int *quantidadeMelhores)
{
    float maiorMedia = 0;
    *quantidadeMelhores = 0;
    for (int i = 0; i < t->quantidade; i++)
    {
        float media = calcularMedia(&t->alunos[i]);
        if (media > maiorMedia)
        {
           maiorMedia = media;
        }
    }

    for (int i = 0; i < t->quantidade; i++)
    {
        if (calcularMedia(&t->alunos[i]) == maiorMedia)
        {
            melhores[*quantidadeMelhores] = t->alunos[i];
            (*quantidadeMelhores)++;
        }
    }
}

//Produto:
typedef struct
{
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
}Produto;

typedef struct
{
    Produto produtos[50];
    int quantidade;
}Loja;

void cadastrarProdutos(Loja *l)
{
    int quantidadeInput;
    printf("Digite quantos produtos voce quer cadastrar: ");
    scanf("%d",&quantidadeInput);

    for (int i = 0; i < quantidadeInput;i++)
    {
        printf("Digite o codigo do produto: ");
        scanf("%d",&l->produtos[i].codigo);
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]",l->produtos[i].nome);
        printf("Digite o preco do produto: ");
        scanf("%f",&l->produtos[i].preco);
        printf("Digite a quantidade do produto: ");
        scanf("%d",&l->produtos[i].quantidade);
        l->quantidade++;
    }
}

Produto* buscarProdutoCodigo(Loja *l)
{
    int codigoBuscar;
    printf("Digite o codigo do produto para buscar: ");
    scanf("%d", &codigoBuscar);
    for (int i = 0; i < l->quantidade; i++)
    {
        if (codigoBuscar == l->produtos[i].codigo)
        {
            return &l->produtos[i];
        }
    }
    printf("Nenhum produto encontrado com o codigo digitado");
    Produto vazio = {0};
    return NULL;
}

void atualizarQuantidadeProduto(Loja *l)
{
    Produto *p = buscarProdutoCodigo(l);
    if (p != NULL)
    {
    int quantidadeAtualizada;
    printf("Digite a nova quantidade do produto: ");
    scanf("%d",&quantidadeAtualizada);
    p->quantidade = quantidadeAtualizada;
    }

}



//Para teste:
int main()
{
    Pessoa jp = {
        "Joao Pedro",18
    };
    Pessoa g = {
        "Gabriela",15
    };
    printPessoa(&jp);
    printf("Adulto: %d\n",adulto(&jp));
    printPessoa(&g);
    printf("Adulto: %d\n",adulto(&g));
    printf("Mais Velho: %s\n", maisVelho(&jp,&g));
    return 0;
}