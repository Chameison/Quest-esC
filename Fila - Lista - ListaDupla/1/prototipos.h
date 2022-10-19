#include "fila.h"
#include "menus.h"

//fun��o criar_fila()
void criar_fila (struct Fila *fila, int tam_fila);

//fun��o inserir_elemento_fila
void inserir_elemento_fila (struct Fila *fila, int novo_elemento);

//fun��o remover_elemento_fila
int remover_elemento_fila(struct Fila *fila);

//fun��o exibir_fila()
void exibir_fila (struct Fila *fila);

//fun��o verifica_fila_vazia()
int verifica_fila_vazia(struct Fila *fila);

//fun��o verifica_fila_cheia
int verifica_fila_cheia (struct Fila *fila);

//fun��o menu_principal()
int menu_principal();
