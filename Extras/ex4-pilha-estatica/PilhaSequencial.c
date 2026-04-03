#include <stdio.h>
#include <stdlib.h>
#include "PilhaSequencial.h"

struct pilha{
    int qtd;
    Aluno dados[MAX];
};

Pilha* cria_pilha(){
    Pilha *pi;
    pi = (Pilha*)malloc(sizeof(Pilha));
    if(pi=NULL)
        pi->qtd = 0;
    return pi;
}