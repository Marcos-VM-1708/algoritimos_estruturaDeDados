#ifndef EXPANSION_H_INCLUDED
#define EXPANSION_H_INCLUDED

typedef int Posicao;

typedef int TipoChave;

typedef struct Item TipoItem;

typedef struct Lista TipoLista;

TipoLista *InicializaLista();

void FLVazia(TipoLista *Lista);

int Vazia(TipoLista *Lista);

int Cheia(TipoLista *Lista);

void Insere(TipoItem *Item, TipoLista *Lista);

void InserePosicao(TipoItem *Item, TipoLista *Lista, Posicao p);

void Retira(Posicao p, TipoLista *Lista, TipoItem *Item);

void Imprime(TipoLista *Lista);

TipoItem *InicializaTipoItem();

void ModificaValorItem(TipoItem *Item, TipoChave Chave, float Nota);

void ImprimeTipoItem(TipoItem *Item);

int UltimoPosicao(TipoLista *Lista);

void Acessa(Posicao p, TipoLista *Lista, TipoItem *Item);

#endif