/*Como parte do projeto que iremos desenvolver durante a disciplina a tarefa de
hoje consiste na implementação dos tipos abstratos de dados de lista linear
sequencial e lista linear encadeada com alocação dinâmica. Os TADs devem conter
as operações:
*/

#include <stdio.h>
#include <stdlib.h>

#include "expansion.h"

typedef int TipoChave;

typedef struct Item {
  TipoChave chave;
  float nota;
} TipoItem;

typedef struct Lista {
  TipoItem infos[256];
  int fim;
} TipoLista;

// Inicia uma lista vazia
TipoLista *InicializaLista() {
  TipoLista *nova_lista = (TipoLista *)malloc(sizeof(TipoLista));
  if(nova_lista == NULL){
      printf("Memoria insuficiente\n");
      exit(1);
  }
  nova_lista->fim = -1;
  return nova_lista;
}

// Faz a lista ficar vazia
void FLVazia(TipoLista *Lista) { Lista->fim = -1; }

// Verifica se a lista é vazia
int Vazia(TipoLista *Lista) {
  if (Lista->fim == -1) {
    return 1;
  } else {
    return 0;
  }
}

// Verifica se a lista está cheia
int Cheia(TipoLista *Lista) {
  if (Lista->fim == (256 - 1)) {
    return 1;
  } else {
    return 0;
  }
}

// Insere elemento no final da lista
void Insere(TipoItem *Item, TipoLista *Lista) {
  if (Cheia(Lista)) {
    printf("Lista Cheia");
  } else {
    Lista->fim += 1;
    Lista->infos[Lista->fim] = *Item;
  }
}

// Insere elemento em posição específica, menor do que o tamanho atual da lista
void InserePosicao(TipoItem *Item, TipoLista *Lista, int Posicao_p) {
  int Posicao;
  if (Cheia(Lista)) {
    printf("Lista cheia.\n");
  } else {
    if (Posicao_p > Lista->fim + 1) {
      printf("Posicao invalida.\n");
    } else {
      Lista->fim++;
      Posicao = Lista->fim;
      while (Posicao > Posicao_p) {
        Lista->infos[Posicao] = Lista->infos[Posicao - 1];
        Posicao--;
      }
      Lista->infos[Posicao_p] = *Item;
    }
  }
}

// Remove um elemento de uma posição específica
void Retira(int Posicao_p, TipoLista *Lista, TipoItem *Item) {
  int Posicao;
  if (Posicao_p > Lista->fim) {
    printf("Posicao invalida.\n");
  } else {
    Lista->fim--;
    Posicao = Posicao_p;
    while (Posicao <= Lista->fim) {
      Lista->infos[Posicao] = Lista->infos[Posicao + 1];
      Posicao++;
    }
  }
}

// Imprime a lista
void Imprime(TipoLista *Lista) {
  if (Vazia(Lista)) {
    printf("Lista Vazia");
  } else {
    for (int i = 0; i <= Lista->fim; i++)
      printf("Chave: %d, nota: %f.\n", Lista->infos[i].chave,
             Lista->infos[i].nota);
  }
}

// cria um tipo do elemento da lista
TipoItem *InicializaTipoItem() {
  TipoItem *NovoItem = (TipoItem *)malloc(sizeof(TipoItem));
  if(NovoItem == NULL){
    printf("Memoria insuficiente\n");
    exit(1);
  }
  return NovoItem;
}

// modifica o valor do tipo da lista
void ModificaValorItem(TipoItem *Item, TipoChave chave, float nota) {
  Item->chave = chave;
  Item->nota = nota;
}

// imprime o elemento da lista
void ImprimeTipoItem(TipoItem *Item) { printf("Chave: %d, Nota: %f.\n", Item->chave, Item->nota); }

// retorna a ultima posição ocupada da lista
int UltimoPosicao(TipoLista *Lista){
  if(Vazia(Lista)){
    return -1;
  }else{
    return(Lista->fim);
  }
}

void Acessa(int Posicao_p, TipoLista *Lista, TipoItem *item){
  if (Posicao_p > Lista->fim) {
    printf("Posicao invalida.\n");
    
  }else{
    item = &Lista->infos[Posicao_p];
    
  }
  
}