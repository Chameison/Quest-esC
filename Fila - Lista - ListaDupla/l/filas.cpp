#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Struct Fila
struct Fila {
	int primeiro_elemento;
	int ultimo_elemento;
	int quant_elementos;
	int tamanho_fila;
	int *fila_completa;
}; //Fim da Struct Fila

//Procedimento criar_fila()
void criar_fila (struct Fila *fila, int tam_fila) {
	fila->primeiro_elemento = 0; 
	fila->ultimo_elemento = -1;
	fila->tamanho_fila = tam_fila;
	fila->quant_elementos = 0;
} //Fim do procedimento criar_fila() 

//Procedimento inserir_elemento_fila()
void inserir_elemento_fila (struct Fila *fila, int novo_elemento) {
	if (fila->ultimo_elemento == fila->tamanho_fila - 1)
		fila->ultimo_elemento = -1;
	
	fila->ultimo_elemento++; //fila->ultimo_elemento = fila->ultimo_elemento + 1
	fila->fila_completa[fila->ultimo_elemento] = novo_elemento;
	fila->quant_elementos++;	
}//Fim do procedimento inserir_elemento_fila()

//Procedimento remover_elemento_fila ()
int remover_elemento_fila(struct Fila *fila) {
	int novo_prim_elemento = fila->fila_completa[fila->primeiro_elemento++];
	
	if (fila->primeiro_elemento == fila->tamanho_fila)
		fila->primeiro_elemento = 0;
	
	fila->quant_elementos--;
	return novo_prim_elemento;			
}//Fim do procedimento remover_elemento_fila()

//Função verifica_fila_vazia()
int verifica_fila_vazia(struct Fila *fila) {
	return (fila->quant_elementos == 0);
}//Fim da função verifica_fila_vazia()

//Procedimento exibir_lista()
void exibir_fila (struct Fila *fila) {
	int cont_tam, cont_quant;
	printf ("\n\nFila: ");
	for (cont_quant = 0, cont_tam = fila->primeiro_elemento; cont_quant < fila->quant_elementos; cont_quant++) {
		printf ("%d\t", fila->fila_completa[cont_tam++]);
		
		if (cont_tam == fila->tamanho_fila)
			cont_tam = 0;
	}
	printf ("\n\n\n"); 
}//Procedimento exibir_lista()


//Função verifica_fila_cheia()
int verifica_fila_cheia (Fila *fila) {
	return (fila->quant_elementos == fila->tamanho_fila);
}//fim da função verifica_fila_cheia()

int main (int argc, char *argv[]) {
	int op, tam_fila, numero, controle = 1;
	struct Fila nova_fila;
	while (controle == 1) {
		printf ("\n\nEste Programa Manipula Filas!");
		printf ("\n\n\n\tMenu");
		printf ("\n\n1 - Criar Fila");
		printf ("\n\n2 - Inserir Elemento na Fila");
		printf ("\n\n3 - Exibir Fila");
		printf ("\n\n4 - Remover Elemento da Fila");
		printf ("\n\n5 - Verificar se a Fila Está Cheia");
		printf ("\n\n6 - Verificar se a Fila Está Vazia");
		printf ("\n\n0 - Sair");
		
		printf ("\n\nInforme a opção desejada: ");
		scanf ("%d", &op);
		system ("cls");
		
		switch (op) {
			case 1:
				printf ("\n\nCriando Nova Fila");
				printf ("\n\nInforme a quantidade de elementos da fila: ");
				scanf ("%d", &tam_fila);
				criar_fila(&nova_fila, tam_fila);
				break;
			
			case 2: 
			
			case 3:
				printf ("\n\nExibindo Fila");
				if (verifica_fila_vazia(&nova_fila))
					printf ("\n\nA fila está vazia!");
				else {
					printf ("\n\nFila: ");
					exibir_fila (&nova_fila);
				}
				break;
			
			case 4:
				printf ("\n\nRemovendo Elemento da Fila");
				if (verifica_fila_vazia(&nova_fila))
					printf ("\n\nA fila está vazia!");
				else {
						
				}
					
		}
	}
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}

/*Tarefinha
1 - Dividir o arquivo em filas.h, main.cpp e um arquivo de protótipos
2 - Implementar funções para manipular várias listas
3 - Finalizar a implementação do menu na main()
4 - Criar uma arquivo .h para as mensagens de menu*/
