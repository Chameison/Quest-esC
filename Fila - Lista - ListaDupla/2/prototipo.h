#include "listaDuplamenteEncadeada.h"
#include "string.h"

//função inicializa_lista()
void inicializa_lista (Lista *lista);

//Função para inserir na lista vazia
int inserir_lista_vazia (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

//função inserir_inicio_lista()
int inserir_inicio_lista (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

//função inserir_fim_lista()
int inserir_fim_lista (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

//função inserir_meio_lista_antes()
int inserir_meio_lista_antes (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int posterior);

//função inserir_meio_lista_depois()
int inserir_meio_lista_depois (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int anterior);

//função remover_elemento_lista()
int remover_elemento_lista (Lista *lista, int posicao);

//função exibir_lista()
void exibir_lista(Lista *lista);

//função exibir_lista_inversa()
void exibir_lista_inversa(Lista *lista);

//função liberar_lista()
void liberar_lista (Lista *lista);

//função limpar ()
void limpar ();

//função menu_principal()
int menu_principal();

//função menu_inserir()
int menu_inserir();

//função menu_remover()
int menu_remover();

