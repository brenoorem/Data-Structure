#include <stdio.h>
#include "bag.h"

// Inicializa a Bag vazia
void init(Bag *b){
	int i;
	for (i = 0; i < BAGSIZE; i++)
		b->item[i] = -1;
}

// Retorna o numero de itens na Bag
int size(Bag *b){
	return 0;
}

// Insere um elemento na Bag. Retorna 1 se o elemento foi inserido com sucesso e 0 cc
int insert(Bag *b, int elem){
	int i;
	for (i = 0; i < BAGSIZE && b->item[i] != -1; i++)
		;
	if (i == BAGSIZE)
		return 0;
	b->item[i] = elem;

	return 1;
}

// Verifica se o elemento elem esta na Bag
int check(Bag *b, int elem){
	return 0;
}

// Remove o elemento elem da Bag
int delete(Bag *b, int elem){
	return 0;
}

// Imprime todos os elementos da Bag
void printall(Bag b){
	int i;
	for (i = 0; i < BAGSIZE && b.item[i] != -1; i++)
		printf("%d ", b.item[i]);
	printf("\n\n");
}