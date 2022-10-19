#include "fila.h"
#include "menus.h"

//função criar_fila()
void criar_fila (struct Fila *fila, int tam_fila);

//função inserir_elemento_fila
void inserir_elemento_fila (struct Fila *fila, int novo_elemento);

//função remover_elemento_fila
int remover_elemento_fila(struct Fila *fila);

//função exibir_fila()
void exibir_fila (struct Fila *fila);

//função verifica_fila_vazia()
int verifica_fila_vazia(struct Fila *fila);

//função verifica_fila_cheia
int verifica_fila_cheia (struct Fila *fila);

//função menu_principal()
int menu_principal();
