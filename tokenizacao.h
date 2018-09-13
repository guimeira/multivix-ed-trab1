#ifndef _TOKENIZACAO_H
#define _TOKENIZACAO_H

typedef enum tipo_token {
  NUMERO, OPERADOR, ABRE_PARENTESES, FECHA_PARENTESES
} TipoToken;

typedef enum tipo_operador {
  SOMA, SUB, MULT, DIV, POT, FIM, ERRO
} TipoOperador;

typedef enum associatividade {
  ESQUERDA, DIREITA
} Associatividade;

typedef struct token {
  TipoToken tipo;
  TipoOperador operador;
  Associatividade associatividade;
  double valor;
  int precedencia;
} Token;

/*
 * Cria um token do tipo número, armazenando o valor passado
 * como parâmetro.
 */
Token token_criar_numero(double valor);

/*
 * Lê o próximo token a partir da entrada padrão.
 */
Token token_proximo();

/*
 * Imprime o token na saída padrão.
 */
void token_imprimir(Token t);

#endif
