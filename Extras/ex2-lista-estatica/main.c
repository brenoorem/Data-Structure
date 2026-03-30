#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"

void exibir_menu(){
    printf("\n========== MENU ==========\n");
    printf("1. Inserir aluno no final\n");
    printf("2. Inserir aluno no inicio\n");
    printf("3. Inserir aluno ordenado\n");
    printf("4. Exibir tamanho da lista\n");
    printf("5. Verificar se lista esta vazia\n");
    printf("6. Verificar se lista esta cheia\n");
    printf("7. Exibir todos os alunos\n");
    printf("8. Sair\n");
    printf("Escolha uma opcao: ");
}

void exibir_alunos(Lista *li){
    int i, tam;
    struct aluno al;
    
    if(lista_vazia(li)){
        printf("Lista vazia!\n");
        return;
    }
    
    tam = tamanho_lista(li);
    printf("\n=== ALUNOS CADASTRADOS ===\n");
    
    for(i = 0; i < tam; i++){
        al = li->dados[i];
        printf("Matrícula: %d\n", al.matricula);
        printf("Nome: %s\n", al.nome);
        printf("Notas: %.1f, %.1f, %.1f\n\n", al.n1, al.n2, al.n3);
    }
}

int main(){
    Lista *li = cria_lista();
    int opcao;
    struct aluno al;
    
    if(li == NULL){
        printf("Erro ao criar lista\n");
        return 1;
    }
    
    printf("Lista criada com sucesso!\n");
    
    do {
        exibir_menu();
        scanf("%d", &opcao);
        getchar();
        
        switch(opcao){
            case 1:
                printf("\n--- Inserir aluno no FINAL ---\n");
                printf("Matricula: ");
                scanf("%d", &al.matricula);
                getchar();
                
                printf("Nome: ");
                fgets(al.nome, 30, stdin);
                al.nome[strcspn(al.nome, "\n")] = 0;
                
                printf("Nota 1: ");
                scanf("%f", &al.n1);
                printf("Nota 2: ");
                scanf("%f", &al.n2);
                printf("Nota 3: ");
                scanf("%f", &al.n3);
                getchar();
                
                if(insere_lista_final(li, al)){
                    printf("Aluno inserido com sucesso!\n");
                } else {
                    printf("Erro ao inserir aluno (lista cheia)!\n");
                }
                break;
                
            case 2:
                printf("\n--- Inserir aluno no INICIO ---\n");
                printf("Matricula: ");
                scanf("%d", &al.matricula);
                getchar();
                
                printf("Nome: ");
                fgets(al.nome, 30, stdin);
                al.nome[strcspn(al.nome, "\n")] = 0;
                
                printf("Nota 1: ");
                scanf("%f", &al.n1);
                printf("Nota 2: ");
                scanf("%f", &al.n2);
                printf("Nota 3: ");
                scanf("%f", &al.n3);
                getchar();
                
                if(insere_lista_incio(li, al)){
                    printf("Aluno inserido com sucesso!\n");
                } else {
                    printf("Erro ao inserir aluno (lista cheia)!\n");
                }
                break;
                
            case 3:
                printf("\n--- Inserir aluno ORDENADO ---\n");
                printf("Matricula: ");
                scanf("%d", &al.matricula);
                getchar();
                
                printf("Nome: ");
                fgets(al.nome, 30, stdin);
                al.nome[strcspn(al.nome, "\n")] = 0;
                
                printf("Nota 1: ");
                scanf("%f", &al.n1);
                printf("Nota 2: ");
                scanf("%f", &al.n2);
                printf("Nota 3: ");
                scanf("%f", &al.n3);
                getchar();
                
                if(insere_lista_ordenada(li, al)){
                    printf("Aluno inserido com sucesso!\n");
                } else {
                    printf("Erro ao inserir aluno (lista cheia)!\n");
                }
                break;
                
            case 4:
                printf("Tamanho da lista: %d\n", tamanho_lista(li));
                break;
                
            case 5:
                if(lista_vazia(li)){
                    printf("Lista esta VAZIA!\n");
                } else {
                    printf("Lista nao esta vazia.\n");
                }
                break;
                
            case 6:
                if(lista_cheia(li)){
                    printf("Lista esta CHEIA!\n");
                } else {
                    printf("Lista nao esta cheia.\n");
                }
                break;
                
            case 7:
                exibir_alunos(li);
                break;
                
            case 8:
                printf("Encerrando programa...\n");
                break;
                
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 8);
    
    libera_lista(li);
    printf("Lista liberada. Voce pode fechar esta janela.\n");
    system("pause");
    
    return 0;
}