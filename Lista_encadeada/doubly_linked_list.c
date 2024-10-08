#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    No * prox;
    No * ant;
}No;

typedef struct lista{
    No * inicio;
    No * fim;
}Lista;

void inicializar(Lista * lista){
    lista->inicio = NULL;
    lista->fim = NULL;
}

int isEmpty(Lista * lista){
    if(lista->inicio == NULL && lista->fim == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void inserir_inicio(Lista * lista, int info){
    No * novo = (No*)malloc(sizeof(No));
    novo->valor = info;
    novo->ant = NULL;
    if(isEmpty == 1){
        novo->prox = NULL;
        lista->fim = novo;
        lista->inicio = novo;
    }
    else{
        novo = lista->inicio->ant;
        novo->prox = lista->inicio;
        lista->inicio = novo;
    }
}

int remover_inicio(Lista * lista){
    No * aux;
    int retorno;
    aux = lista->inicio;
    retorno = lista->inicio->valor;
    lista->inicio->prox->ant = NULL;
    lista->inicio = lista->inicio->prox;
    free(aux);
    return retorno;

}

void inserir_fim(Lista * lista,int info){
    No * novo = (No*)malloc(sizeof(No));
    novo->prox = NULL;
    novo->valor = info;
    if(isEmpty == 1){
        novo->ant = NULL;
        lista->inicio = novo;
        lista->fim = novo;
    }
    else{
        lista->fim->prox = novo;
        novo->prox = NULL;
        lista->fim->ant->prox = novo;
    }
}

int remover_fim(Lista * lista){
    No * aux;
    int retorno;
    aux = lista->fim;
    retorno = lista->fim->valor;
    lista->fim->ant->prox = NULL;
    lista->fim = lista->fim->ant;
    free(aux);
    return retorno;
}



