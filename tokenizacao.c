#include <stdio.h>
#include <ctype.h>
#include "tokenizacao.h"

Token token_proximo() {
  Token t;
  
  //Obter próimo caractere da entrada:
  int c = getchar();
  
  //Avançar enquanto houver espaços vazios na entrada:
  while(isspace(c) && c != '\n') {
    c = getchar();
  }
  
  //Se chegamos ao fim da linha, nossa expressão terminou:
  if(c == '\n') {
    t.tipo = FIM;
    return t;
  }
  
  if(isdigit(c)) {
    //Se for número, vamos colocar o caractere de volta na stream, para ler com scanf:
    ungetc(c, stdin);
    double valor;
    scanf("%lf", &valor);
    t.tipo = NUMERO;
    t.valor = valor;
    return t;
  } else {
    //Se não for número, é operador ou parênteses:
    switch(c) {
      case '+':
        t.tipo = OPERADOR;
        t.operador = SOMA;
        t.precedencia = 1;
        t.associatividade = ESQUERDA;
        break;
      
      case '-':
        t.tipo = OPERADOR;
        t.operador = SUB;
        t.precedencia = 1;
        t.associatividade = ESQUERDA;
        break;
      
      case '*':
        t.tipo = OPERADOR;
        t.operador = MULT;
        t.precedencia = 2;
        t.associatividade = ESQUERDA;
        break;
      
      case '/':
        t.tipo = OPERADOR;
        t.operador = DIV;
        t.precedencia = 2;
        t.associatividade = ESQUERDA;
        break;
      
      case '^':
        t.tipo = OPERADOR;
        t.operador = POT;
        t.precedencia = 3;
        t.associatividade = DIREITA;
        break;
      
      case '(':
        t.tipo = ABRE_PARENTESES;
        break;
      
      case ')':
        t.tipo = FECHA_PARENTESES;
        break;
      
      default:
        t.tipo = ERRO;
        break;
    }
    
    return t;
  }
}

void token_imprimir(Token t) {
  switch(t.tipo) {
    case OPERADOR:
      switch(t.operador) {
        case SOMA:
          printf("+ ");
          break;
        
        case SUB:
          printf("- ");
          break;
        
        case MULT:
          printf("* ");
          break;
        
        case DIV:
          printf("/ ");
          break;
        
        case POT:
          printf("^ ");
          break;
      }
      break;
    
    case ABRE_PARENTESES:
      printf("( ");
      break;
    
    case FECHA_PARENTESES:
      printf(") ");
      break;
    
    case NUMERO:
      printf("%.2lf ", t.valor);
      break;
    
    case FIM:
      printf("[Fim]\n");
      break;
    
    case ERRO:
      printf("[Erro!]\n");
      break;
  }
}

Token token_criar_numero(double valor) {
  Token t;
  t.tipo = NUMERO;
  t.valor = valor;
  return t;
}
