#include "tamSimbolos.h"

tSimbolo buscaTS(char * token, lista l){
  no n = primeiro_no(l);
  tSimbolo t;
  while(n){
    t = (tSimbolo) conteudo(n);
    if(strcmp(t->name,token) == 0)
      return t;
    n = proximo_no(n);
  }
  return NULL;
}

//TODO: Comentar
tSimbolo newSimbolo(char * token){
  tSimbolo t = malloc(sizeof(struct tSimbolo));
  if(!t)
    return NULL;
  t->name = malloc(sizeof(token));
  if(t->name){
    free(t);
    return NULL;
  }
  strcpy(t->name,token);
  return t;
}
