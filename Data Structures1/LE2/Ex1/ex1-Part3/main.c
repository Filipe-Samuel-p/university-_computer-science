#include <stdlib.h>
#include <stdio.h>
#include "implemetation.c"




int main(void){

 HeadStack *head; // criacao da head da pilha
 head = (HeadStack*)malloc(sizeof(HeadStack));
 if(head){
    head->count = 0;
    head->top = NULL;
 }
 int *number;
 int option;

 do{
        printf("\n\n-------- CHOICE AN OPTION --------\n\n");
        printf("[1]- Inserir elemento na pilha\n");
        printf("[2]- Remover elemento na pilha\n");
        printf("[3]- Mostrar o ultimo elemento da pilha\n");
        printf("[4]- Mostrar quantos elementos tem na pilha\n");
        printf("[5]- Liberar pilha\n");
        printf("[6]- SAIR\n");
        printf("\n Escolha uma das opcoes: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nEscolha um elemento para inserir: ");
            number = (int *)malloc(sizeof(int));
            scanf("%d", number);
            push(head, number);
            printf("\n Inserido\n");
            break;
        case 2:
            int *number = (int*)pop(head); //convertenndo em inteiro
            printf("\n Elemento removido %d\n", *number);
            free(number);
            break;
        case 3:
            elementTop(head);
            break;
        case 4:
            printf("%d",totalElements(head));
            break;
        case 5:
            freeStack(head);
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("\nEscolha uma opcao válida");
            break;
        }
    } while(option != 6);

    return 0;
}