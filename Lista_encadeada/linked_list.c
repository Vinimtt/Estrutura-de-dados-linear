#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no * prox;
}No;

typedef struct lista{
    No * inicio;
    No * fim;
}Lista;


int isEmpty(Lista lista){
    if(lista.inicio == NULL && lista.fim == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void Add_inicio(Lista * lista,int valor){

    No * novo_no = (No*) malloc(sizeof(No));

    if(isEmpty(*lista) == 1){
        novo_no->valor = valor;
        novo_no->prox = NULL;
        lista->fim = novo_no;
        lista->inicio = novo_no;
    }
    else{
        novo_no->prox = lista->inicio;
        novo_no->valor = valor;
        lista->fim = novo_no->prox;
        lista->inicio = novo_no;
    }
}

int Rmv_inicio(Lista * lista){
    No * aux;
    int num;
    num = lista->inicio->valor;
    aux = lista->inicio;
    lista->inicio = lista->inicio->prox;
    if(lista->inicio == NULL){
        lista->fim == NULL;
    }
    free(aux);
    return num;
}

void Add_fim(Lista * lista, int valor){
    No * novo_no = (No*)malloc(sizeof(No));
    novo_no->prox = NULL;
    novo_no->valor = valor;
    if(lista->fim == NULL){
        lista->inicio = novo_no;
        lista->fim = novo_no;
    }
    else{
        lista->fim->prox = novo_no;
        lista->fim = novo_no;
    }
    
}

void printar_lista(Lista lista){
    No* atual = lista.inicio;
    if (isEmpty(lista)) {
        printf("A lista está vazia.\n");
        return;
    }
    printf("Elementos da lista: ");
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    // Criando a lista
    Lista lista;
    lista.inicio = NULL;
    lista.fim = NULL;

    // Adicionando elementos no início e no fim
    Add_inicio(&lista, 10);
    Add_inicio(&lista, 20);
    Add_fim(&lista, 30);
    Add_fim(&lista, 40);

    // Imprimindo a lista
    printar_lista(lista);

    // Removendo o primeiro elemento e imprimindo a lista novamente
    printf("Elemento removido: %d\n", Rmv_inicio(&lista));
    printar_lista(lista);

    return 0;
}

