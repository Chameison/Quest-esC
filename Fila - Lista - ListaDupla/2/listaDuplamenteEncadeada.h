#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "strings.h"

//Prot�tipo de elemento/registro da lista
typedef struct elemento_lista {
	int id_pessoa;
	char *nome;
	float peso;
	struct elemento_lista *proximo;
	struct elemento_lista *anterior;
}elemento; //fim do prot�tipo

//Prot�tipo de controle geral da lista
typedef struct controle_lista {
	struct elemento_lista *inicio;
	struct elemento_lista *fim;
	int tamanho;
}Lista; //fim do prot�tipo

//Procedimento inicializa_lista()
void inicializa_lista (Lista *lista) {
	lista->inicio = NULL;
	lista->fim = NULL;
	lista->tamanho = 0;
} //fim do procedimento inicializa_lista()

//Fun��o para inserir na lista vazia
int inserir_lista_vazia (Lista *lista, int novo_id, char *novo_nome, float novo_peso) {
	int condicao;
	elemento *novo_elemento = (elemento*)malloc(sizeof(elemento));
	if(novo_elemento == NULL)
		return -1;
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	//novo_elemento->anterior = NULL;
	//novo_elemento->proximo = NULL;
	
	//Lista
	lista->inicio = novo_elemento;
	lista->fim = novo_elemento;
	lista->tamanho++;
	return 0;  
} //fim da fun��o inserir_na_lista_vazia()

//fun��o inserir_inicio_lista()
int inserir_inicio_lista (Lista *lista, int novo_id, char *novo_nome, float novo_peso) {
	elemento *novo_elemento = (elemento*)malloc(sizeof(elemento));
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	novo_elemento->anterior = NULL;
	novo_elemento->proximo = lista->inicio;
	
	//Lista
	lista->inicio = novo_elemento;
	lista->tamanho++;
	return 0;  
}//fim da fun��o inserir_inicio_lista()

//fun��o inserir_fim_lista()
int inserir_fim_lista (Lista *lista, int novo_id, char *novo_nome, float novo_peso) {
	elemento *novo_elemento = (elemento*)malloc(sizeof(elemento));
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento	
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	novo_elemento->anterior = lista->fim;
	novo_elemento->proximo = NULL;
	
	//Lista
	lista->fim = novo_elemento;
	lista->tamanho++;
	return 0;  
}//fim da fun��o inserir_fim_lista()

//fun��o inserir_meio_lista_antes()
int inserir_meio_lista_antes (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int posterior) {
	int i;
	elemento *novo_elemento = (elemento*)malloc(sizeof(elemento));
	elemento *percorre_lista;
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento	
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	
	percorre_lista = lista->inicio;
	for (i = 1; i < posterior; i++) {
		percorre_lista = percorre_lista->proximo;	
	} 
	
	novo_elemento->proximo = percorre_lista;
	novo_elemento->anterior = percorre_lista->anterior;
	
	if (percorre_lista == NULL)
		lista->inicio = novo_elemento;
	else {
		percorre_lista->anterior->proximo = novo_elemento;
		percorre_lista->anterior = novo_elemento;
	}
		
	//Lista
	lista->tamanho++;
	return 0;  
}//fim da fun��o inserir_meio_lista_antes()

//fun��o inserir_meio_lista_depois()
int inserir_meio_lista_depois (Lista *lista, int novo_id, char *novo_nome, float novo_peso, int anterior) {
	int i;
	elemento *novo_elemento = (elemento*)malloc(sizeof(elemento));
	elemento *percorre_lista;
	if(novo_elemento == NULL)
		return -1;
	
	//Elemento	
	novo_elemento->id_pessoa = novo_id;
	strcpy (novo_elemento->nome, novo_nome);
	novo_elemento->peso = novo_peso;
	
	percorre_lista = lista->inicio;
	for (i = 1; i < anterior; i++) {
		percorre_lista = percorre_lista->proximo;	
	} 
	
	novo_elemento->anterior = percorre_lista;
	novo_elemento->proximo = percorre_lista->proximo;
	
	if (percorre_lista == NULL)
		lista->inicio = novo_elemento;
	else {
		percorre_lista->proximo = novo_elemento;
		percorre_lista->proximo->anterior = novo_elemento;
	}
	
	//Lista
	lista->tamanho++;
	return 0;  
}//fim da fun��o inserir_meio_lista_antes()

//fun��o remover_elemento_lista()
int remover_elemento_lista (Lista *lista, int posicao) {
	int i;
	elemento *percorre_lista, *elemento_removido;
	
	if (lista->tamanho == 0)
		return -1;
	
	if (posicao == 1) { //remo��o no in�cio da lista
		elemento_removido = lista->inicio;
		lista->inicio = lista->inicio->proximo;
		
		if (lista->inicio == NULL)
			lista->fim = NULL;
		else
			lista->inicio->anterior = NULL;
	}
	else if (posicao == lista->tamanho) { //remo��o no final da lista
		elemento_removido = lista->fim;
		lista->fim->anterior->proximo = NULL;
		lista->fim = lista->fim->anterior;
	}
	else { //remo��o no meio da lista
		percorre_lista = lista->inicio;
		for (i = 1; i < posicao; i++)
			percorre_lista = percorre_lista->proximo;
		
		elemento_removido = percorre_lista;
		elemento_removido->anterior->proximo = elemento_removido->proximo;
		elemento_removido->proximo->anterior = elemento_removido->anterior;
	}
	
	free(elemento_removido->nome);
	free(elemento_removido);
	lista->tamanho--;
	return 0;	
}//fim da fun��o remover_elemento_lista()

//fun��o exibir_lista()
void exibir_lista(Lista *lista) {
	elemento *percorre_lista;
	percorre_lista = lista->inicio;
	printf ("\n\nElementos da lista");
	while (percorre_lista->proximo != NULL){
		printf ("\n\n\nId do usu�rio: %d.", percorre_lista->id_pessoa);
		printf ("\n\nNome do usu�rio: %s.", percorre_lista->nome);
		printf ("\n\nPeso do usu�rio (kg): %.2f.", percorre_lista->peso);
		percorre_lista = percorre_lista->proximo;
	}
}//fim fun��o exibir_lista()

//fun��o exibir_lista_inversa()
void exibir_lista_inversa(Lista *lista) {
	elemento *percorre_lista;
	percorre_lista = lista->fim;
	printf ("\n\nElementos da lista");
	while (percorre_lista->anterior != NULL){
		printf ("\n\n\nId do usu�rio: %d.", percorre_lista->id_pessoa);
		printf ("\n\nNome do usu�rio: %s.", percorre_lista->nome);
		printf ("\n\nPeso do usu�rio (kg): %.2f.", percorre_lista->peso);
		percorre_lista = percorre_lista->anterior;
	}
}//fim fun��o exibir_lista_inversa()

//fun��o buscar_elemento_lista()
int buscar_elemento_lista(Lista *lista, int id_busca) {
	elemento *percorre_lista;
	percorre_lista = lista->inicio;
	printf ("\n\nElemento encontrado: ");
	while (percorre_lista->proximo != NULL){
		if( percorre_lista->id_pessoa == id_busca){ // Quando acha o elemento pelo id
			printf ("\n\n\nId do usu�rio: %d.", percorre_lista->id_pessoa);
			printf ("\n\nNome do usu�rio: %s.", percorre_lista->nome);
			printf ("\n\nPeso do usu�rio (kg): %.2f.", percorre_lista->peso);
			
	}
	else{ // Quando n�o acha o elemento pelo id
		return NULL; 
	} 
		continue;
  }
}
//fim da fun��o buscar_elemento_lista()

//fun��o liberar_lista()
void liberar_lista (Lista *lista){
	while (lista->tamanho > 0) 
		remover_elemento_lista (lista, 1);	
}//fim da fun��o liberar_lista()


//fun��o limpar ()
void limpar () {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//fim da fun��o limpar()



