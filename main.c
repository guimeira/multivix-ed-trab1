#include <stdio.h>
#include <math.h>
#include "pilha.h"
#include "fila.h"
#include "tokenizacao.h"

int main() {
	//Substitua esta função pela implementação do seu trabalho.
	printf("Digite uma expressão:\n");
	Token t = token_proximo();
	
	while(t.tipo != FIM && t.tipo != ERRO) {
		printf("\nToken = ");
		token_imprimir(t);
		t = token_proximo();
	}
	
	return 0;
}
