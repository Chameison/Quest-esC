#include "listD.h"

int main (void){
	
	system("cls");
	setlocale (LC_ALL, "Portuguese");
	Lista* lista;
	Lista* lista1;
	Lista* list;
	int id;
	int repete_id = 0;
	char nome [100];
	float peso;
	
	printf("\n\nEste programa manipula uma lista encadeada!\n\n");
	
	// Verificando se a lista está vazia
	if(lista_vazia(lista)){
		printf("\n\nLista está vazia!");
	}
	else{
		printf("\n\nLista não está vazia!");
	}
	// inserir um elemento na lista
	
	fflush(stdin);
	lista = criar_lista();
	
	lista = inserir_lista(lista, 01, "Alicinha", 56);
	lista = inserir_lista(lista, 02, "Kauany", 58);
	lista = inserir_lista(lista, 02, "Aloma", 63);
	lista = inserir_lista(lista, 04, "Breno", 90);
	
	// criando outra lista para a função listas_iguais
	lista1 = inserir_lista(lista1, 01, "Alicinha", 56);
	lista1 = inserir_lista(lista1, 02, "Kauany", 58);
	lista1 = inserir_lista(lista1, 03, "Aloma", 63);
	lista1 = inserir_lista(lista1, 04, "Breno", 90);

	printf("\n\nAté aqui OK");
	
	// imprimir lista
	imprimir(lista);
	printf("\n\n");
		
	//imprimir elemento da lista
	imprimir_elemento_lista(lista,01);
	printf("\n\n");

	// Verificar se a 'lista' e 'lista1' são iguais
	if(listas_iguais(lista, lista1)){
		printf("\n\n\nAs listas são iguais");
	}
	else{
		printf("\n\n\nAs listas não são iguais");
	}
	
	repete_id = iguais(lista, 02);
		
	if(repete_id==0){
		printf("\n\nNão há repetição de id nessa lista!");
	}	
	else{
		printf("\n\nO id possui %d repetições na lista encadeada!", repete_id);
	}
	
	// Buscando o elemento com base em id- retornando p
	list = busca_elemento(lista, 03);
		
	printf("\nElemento localizado ");
	printf("\n\nId: %d", list->id);
	printf("\n\nPeso: %2.f", list->peso);
	printf("\n\nNome: %s", list->nome);

	// liberando a lista
	lista = liberar_lista(lista);
	
	//remover elemento 01 da lista 
	remover_lista(lista,01);
	
	printf("\n\n");
	
	// Agora imprime a lista sem o element 01
	imprimir(lista);
	
	// Verificando se a lista está vazia após liberar 
	if(lista_vazia(lista)){
		printf("\n\nLista está vazia!");
	}
	else{
		printf("\n\nLista não está vazia!");
	}
	printf("\n\n");
	
	
	
	
	
	printf("\n\n\nObrigado por utilizar nosso programa!\n\n\n");
	system("pause");
	return 0;
}
