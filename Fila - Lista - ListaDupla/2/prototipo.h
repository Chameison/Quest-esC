#include "listaDuplamenteEncadeada.h"
#include "string.h"

//fun��o inicializa_lista()
void inicializa_lista (Lista *lista);

//Fun��o para inserir na lista vazia
int inserir_lista_vazia (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

//fun��o inserir_inicio_lista()
int inserir_inicio_lista (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

//fun��o inserir_fim_lista()
int inserir_fim_lista (Lista *lista, int novo_id, char *novo_nome, float novo_peso);

//fun��o inserir_meio_lista_antes()
int inserir_meio_lista_antes (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int posterior);

//fun��o inserir_meio_lista_depois()
int inserir_meio_lista_depois (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int anterior);

//fun��o remover_elemento_lista()
int remover_elemento_lista (Lista *lista, int posicao);

//fun��o exibir_lista()
void exibir_lista(Lista *lista);

//fun��o exibir_lista_inversa()
void exibir_lista_inversa(Lista *lista);

//fun��o liberar_lista()
void liberar_lista (Lista *lista);

//fun��o limpar ()
void limpar ();

//fun��o menu_principal()
int menu_principal();

//fun��o menu_inserir()
int menu_inserir();

//fun��o menu_remover()
int menu_remover();

