#define MAX 100

typedef struct aluno{
    char nome[30];
    int matricula;
    float n1, n2, n3;
}Aluno;

typedef struct pilha Pilha;

Pilha cria_pilha();