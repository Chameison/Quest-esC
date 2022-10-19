#include "prototipo.h"

int main (int argc, char* argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int op1, op2, op3, controle = 1;
	char *novo_nome;
	int novo_id, i;
	float novo_peso;
	elemento *novo_elemento;
	Lista *nova_lista;

	printf("\n\nInicializando a lista...");
	inicializa_lista(nova_lista);
	while (controle != 0) {
		inicializa_lista(nova_lista);
		
		limpar ();	
		op1= menu_principal();
		switch (op1) {
			case 1: //Inserir
				limpar();
				op2= menu_inserir();
				
				switch (op2) {
					case 6:
					inserir_lista_vazia(nova_lista,novo_id,novo_nome,novo_peso);
					limpar();	
					printf("\n\nInserindo elementos no inicio da lista");
					printf("\n\nID: ");
					fflush(stdin);
					scanf("%i",&novo_id);
					
					printf("\n\nPESO: ");
					fflush(stdin);
					scanf("%f",&novo_peso);
					
					printf("\n\nNOME: ");
					fflush(stdin);
					scanf("%[^\n]",novo_nome);
					
					inserir_inicio_lista(nova_lista,novo_id,novo_nome,novo_peso);
					case 7:
						break;
					
					case 8:
						break;
					
					case 9:
						break;
					
					default:
						printf ("\n\nDigite uma opção válida!");
					
				}
					
			break;
			case 2: //Exibir lista completa
				
				break;
			
			case 3: //Exibir elemento da lista
				
				break;
			
			case 4: //Remover elemento da lista
				system ("cls");
				op3 = menu_remover();
				switch (op3) {
					case 10:
						break;
					
					case 11:
						break;
					
					case 12:
						break;
					
					case 13:
						break;
					
					default:
						printf ("\n\nDigite uma opção válida!");
				}
				break;
			
			case 5: //Liberar a lista 
				
				break;
			
			case 0:
				printf ("\n\nVocê optou em sair do programa!");
				controle = 0;
				break;
			
			default:
				printf ("\n\nDigite uma opção válida!");
		}
		
	}
	
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
