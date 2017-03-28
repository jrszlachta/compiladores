#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VARSIMPLES 1
//#define [TIPO] 2
//#define ...

typedef struct simbolo{
  char * name;    // Nome do símbolo (token)
  int type;       // Tipo do símbolo
  int nl;         // Nível léxico
  int varType     // Tipo da var simples
  int desloc      // Deslocamento em relação ao nível léxico
} tSimbolo;

tsimbolo * buscaTS(char * token);
void insereTabSimbVS(char * token, int type, int nl, int varType, int desloc);
// void insereTabSimb[TIPO](...);
