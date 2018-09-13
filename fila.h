#ifndef _FILA_F
#define _FILA_H

#include "tokenizacao.h"

typedef struct fila Fila;

/*
 * Cria uma nova fila vazia.
 */
Fila* fila_criar();

/*
 * Adiciona um elemento ao fim da fila.
 */
void fila_adicionar(Fila *f, Token t);

/*
 * Remove um elemento do início da fila.
 */
Token fila_remover(Fila *f);

/*
 * Retorna 1 se a fila estiver vazia e 0 caso contrário.
 */
int fila_vazia(Fila *f);

/*
 * Destrói a fila e seus elementos.
 */
void fila_destruir(Fila *f);

/*
 * Imprime os elementos da fila.
 */
void fila_imprimir(Fila *f);

#endif
