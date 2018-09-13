#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no {
  Token token;
  struct no *prox;
} No;

struct fila {
  No *primeiro, *ultimo;
};

Fila* fila_criar() {
	//Implemente
}

void fila_adicionar(Fila *f, Token t) {
	//Implemente
}

Token fila_remover(Fila *f) {
	//Implemente
}

int fila_vazia(Fila *f) {
	//Implemente
}

void fila_destruir(Fila *f) {
	//Implemente
}

void fila_imprimir(Fila *f) {
	//Implemente
}
