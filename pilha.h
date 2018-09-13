#ifndef _PILHA_H
#define _PILHA_H

#include "tokenizacao.h"

typedef struct pilha Pilha;

/*
 * Cria uma nova pilha vazia.
 */
Pilha* pilha_criar();

/*
 * Adiciona elemento no topo da pilha.
 */
void pilha_push(Pilha *p, Token t);

/*
 * Retira elemento do início da pilha.
 */
Token pilha_pop(Pilha *p);

/*
 * Retorna o primeiro elemento da pilha, sem retirá-lo.
 */
Token pilha_primeiro(Pilha *p);

/*
 * Retorna 1 se a pilha estiver vazia ou 0 caso contrário.
 */
int pilha_vazia(Pilha *p);

/*
 * Destrói a pilha e seus elementos.
 */
void pilha_destruir(Pilha *p);

/*
 * Imprime todos os elementos na pilha atualmente.
 */
void pilha_imprimir(Pilha *p);

#endif
