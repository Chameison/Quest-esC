#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>


// struct lista
struct lista {
	int id;
	char nome[100];
	float peso;
	struct lista*prox; // prox = pr�ximo
	struct lista*ant; // ant= anterior
};
// fim da struct lista

typedef struct lista Lista;

// fun��o criar_lista ()
Lista* criar_lista(){
	return NULL;
} //fim da fun��o criar_lista ()

// fun��o inserir lista
Lista* inserir_lista(Lista* l, int novo_id ,char* novo_nome , float novo_peso){
	Lista* novo= (Lista*)malloc(sizeof(Lista));
	novo->id = novo_id;
	strcpy(novo->nome, novo_nome);
	novo->peso=novo_peso;
	novo->prox=l;
	return novo;
}
// fim da fun��o criar_lista

//fun��o imprimir_lista
void imprimir(Lista* l){
	Lista* p = l;
		for(p=l; p!=NULL; p=p->prox ){
		printf("\n\nId do cadastro: %d",p->id);
		printf("\n\nNome da pessoa: %s",p->nome);
		printf("\n\nPeso da pessoa (kg): %2.f",p->peso);
		printf("\n\n");
	}
	
} // fim da fun��o imprimir_lista

//fun��o imprimir_elemento_lista
void imprimir_elemento_lista (Lista *l, int codigo_busca){
	Lista* p;
	int cod=0;
	for(p=l;p !=NULL; p= p->prox){
		if(p->id == codigo_busca){
			int cod=1;
		printf("\n\nId do cadastro: %d",p->id);
		printf("\n\nNome da pessoa: %s",p->nome);
		printf("\n\nPeso da pessoa (kg): %2.f",p->peso);
		printf("\n\n");
		}
	}
	if(cod=0){
		printf("Elemento n�o localizado!");
	}
}
//fim da fun��o imprimir_elemento_lista

// fun��o busca_elemento 
Lista* busca_elemento (Lista* l, int codigo_busca){
	Lista* p;
	for(p=l; p!=NULL; p= p->prox){
	if(p->id == codigo_busca){
		return p;
		}
	}
	return NULL;
}
// fim da fun��o busca_elemento

//fun��o lista_vazia
int lista_vazia (Lista* l){
	if(l==NULL){
		return 1;
	}
		return 0;
}
//fim da fun��o lista_vazia

// fun��o remover_elemento
Lista* remover_lista (Lista*l, int codigo_busca){
	Lista *ant = NULL;
	Lista *p = l;
		while(p != NULL && p->id != codigo_busca){
			ant = p;
			p = p->prox;
						
		// se n�o testar lista vazia:
		// lista varia -? ou elemento n�a localizado
		}
		if ( p == NULL){
			return l;			
		}
		if ( ant == NULL){ // localizou no primeiro elemento da lista
			l = p->prox;
		}
	
		else {
			ant->prox = p->prox;
		}
		free (p);
		return l;
}
// fim da fun��o remover_elemento

// fun��o liberar_lista
Lista* liberar_lista (Lista*l){
	Lista* p = l;

		while( p != NULL){
			Lista*t = p->prox;
			free(p);
			p=t;
		}
		return p;
}
// fim da fun��o liberar_lista

// fun��o listas_iguais 
int listas_iguais (Lista* l1, Lista* l2){
	// dois ponteiros auxiliares
	lista* p1 = l1;
	lista* p2 = l2;
	
	while( p1 != NULL && p2 != NULL){
		
		if( p1->id != p2->id){
			return 0;
		}
		p1 = p1->prox;
		p2 = p2->prox;
	}
		return p1 == p2; // NULL == NULL retornar� 1
		
}

int iguais (Lista* l, int codigo_busca){
	Lista* p;
	int count = 0;
	for(p = l; p != NULL; p = p->prox){
		if(p->id == codigo_busca)
			count++;
	}
	return count;
}


// fim da fun��o busca_elemento

	//fun��o imprimir_lista()-busca bin�ria
	//fun��o pra ordenar a lista com base no id de cadastro

