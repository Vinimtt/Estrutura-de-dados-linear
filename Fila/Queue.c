#include <stdio.h>
#include <stdlib.h>


typedef struct noFila{
    int info;
    struct noFila *prox;
}TNoFila;

typedef struct fila{
    TNoFila *inicio, * fim; 
}Fila;


void inicializar(Fila* Queue){
    Queue->inicio = NULL;
    Queue->fim = NULL;
}

int isEmpty(Fila Queue){
    if(Queue.inicio == NULL && Queue.fim == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(Fila Queue){
    return 0;
}


void enQueue(Fila *fila, int valor){
    TNoFila* novo;
    novo = (TNoFila*)malloc(sizeof(TNoFila));
    novo->info = valor;
    novo ->prox = NULL;

    if(isEmpty(*fila) == 1){
        fila->inicio = novo;
        fila->fim = novo;
    }
    else{
        fila->fim->prox = novo;
        fila->fim = novo;
    }
}

int deQueue(Fila *fila){
    TNoFila *aux;
    int valor;

    aux = fila->inicio;
    valor = fila->inicio ->info;

    fila->inicio = fila->inicio->prox;

    if(fila->inicio == NULL){
        fila->fim = NULL;
    }

    free(aux);
    return valor;
}

int head(Fila fila){
    return fila.inicio->info;
}

void imprimir(Fila fila){
    TNoFila *aux;
    aux = fila.inicio;

    while(aux != NULL){
        printf("%d\n",aux->info);
        aux = aux->prox;
    }
}

void exibirOpcoes() {
    printf("Opções: \n");
    printf("1 - Enqueue \n");
    printf("2 - Dequeue \n");
    printf("3 - Head \n");
    printf("4 - IMprimir \n");
    printf("0 - Encerrar programa \n");
    printf("Informe a opção desejada: ");
}

int main()
{
    Fila minhaFila;
    inicializar(&minhaFila);
    int op, num;
    do {
        exibirOpcoes();
        scanf("%d", &op);
        switch (op) {
        case 1: printf("Informe o valor: ");
            scanf("%d", &num);
            if (isFull(minhaFila) == 0) {
                enQueue(&minhaFila, num);
                printf("Valor enfileirado!\n");
            }
            else {
                printf("Queue full!\n");
            }
            break;
        case 2: if(isEmpty(minhaFila)== 0){
                printf("Valor %d desemfileirado\n",deQueue(&minhaFila));
            }
                else{
                    printf("Queue empty\n");
                }
            break;
        case 3: if(isEmpty(minhaFila)== 0){
                printf("Valor da cabeca da fila eh : %d\n",head(minhaFila));
            }
                else{
                    printf("Queue empty\n");
                }
            break;
            case 4:imprimir(minhaFila);
            break;
        case 0: printf("Fim de programa!");
            break;
        default: printf("Opção inválida!");
        }
    } while (op != 0);
    return 0;
}