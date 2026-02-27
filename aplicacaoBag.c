// Implementacao de uma aplicacao do uso da Bag

#include<stdio.h>
#include"bag.h"

int main()
{
	// declaracao variaveis
	Bag sacola;
	int op = 0, num;

	// inicializa a sacola
	init(&sacola);

	while(op != 4){
		printf("Voce esta usando uma sacola para inserir numeros inteiros\n");
		printf("O que deseja fazer? \n");
		printf("1. Inserir, 2. Remover, 3. Buscar, 4. Sair: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("Entre com o valor a ser inserido:");
				scanf ("%d", &num);
				if (insert(&sacola, num))
					printf("Inserido com sucesso\n");
				else
					printf("Sacola cheia\n");
			case 2:

			case 3:

			case 4: break;
			default: printf("Opcao invalida. Tente novamente.\n");
		}
		printall(sacola);
	}


	return 0;
}