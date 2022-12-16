#include <stdio.h>
#include <stdlib.h>

#include "expansion.h"

int main() {

  TipoLista *lista;

  lista = InicializaLista();

  FLVazia(lista);

  Vazia(lista);

  Cheia(lista);

  TipoItem *item;

  item = InicializaTipoItem();

  ModificaValorItem(item, 3, 4);

  ImprimeTipoItem(item);

  Insere(item, lista);

  printf("\n");

  //Imprime(lista);

  ModificaValorItem(item, 60, 60);

  Insere(item, lista);

  Imprime(lista);

  printf("\n");

  InserePosicao(item, lista, 0);

  Imprime(lista);

  Retira(1, lista, item);

  printf("\n");

  Imprime(lista);

  printf("\n");

  ImprimeTipoItem(item);

  Acessa(1,lista,item);

  Insere(item, lista);

  Insere(item, lista);

  ImprimeTipoItem(item);

  printf("%d", UltimoPosicao(lista));

  return 0;
}