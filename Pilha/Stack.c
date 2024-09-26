#include <stdio.h>
#include <stdlib.h>


typedef struct noStack{
    int info;
    struct noFila *prox;
}TNoStack;

typedef TNoStack* Pilha;

void inicializar(Pilha *pilha){
    pilha = NULL;
}

int isEmpty(Pilha pilha){
    if(pilha = NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(Pilha pilha){
    return 0;
}

void push(Pilha *pilha, int valor){
    TNoStack *novo;
    novo = (TNoStack* )malloc(sizeof(TNoStack));
    novo -> info = valor;
    novo->prox = *pilha;
    *pilha = novo;

}

int  pop(Pilha *pilha){
    TNoStack *aux;
    int num;
    aux = *pilha;
    num = aux->info;
    *pilha = aux->prox;
    free(aux);
    return num;
}   