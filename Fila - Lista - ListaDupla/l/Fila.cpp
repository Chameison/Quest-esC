#include "prototipos.h"

int main (int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int op, tam_fila, numero, controle = 1,i;
	int valor;
	struct Fila novafila;
	
		printf ("\n\nInforme a quantidade de elementos da fila: ");
		scanf ("%d", &tam_fila);
		
		printf ("\n\nCriando Nova Fila...\n\n");
		system("pause");
		system("cls");
		criar_fila(&novafila,tam_fila);	
		
	while (controle == 1) {
		op = menu_principal();
		
		switch (op) {
						
			case 1: 
				
				if(verifica_fila_cheia(&novafila))
					printf("\n\nEstá cheia!");
				
				else{
				printf("\n\nInserindo elementos na Fila");
				for(i=0; i<tam_fila; i++){
					printf("\n\nELEMENTO :");
					scanf("%d",&valor);
					inserir_elemento_fila(&novafila, valor);
				}
			}
				
				break;
			case 2:
				printf ("\n\nExibindo Fila: ");
				if (verifica_fila_vazia(&novafila))
					printf ("\n\nA fila está vazia!");
				else {
					exibir_fila(&novafila);
				}
				break;
			
			case 3:
				printf ("\n\nRemovendo Elemento da Fila");
				if (verifica_fila_vazia(&novafila))
					printf ("\n\nA fila está vazia!");
				else {
					remover_elemento_fila(&novafila);	
				}
				break;
				
			case 4:
				if (verifica_fila_vazia(&novafila))
					printf ("\n\nA fila está vazia!");
				else{
					exibir_fila (&novafila);
				}
				break;
			case 5:	
				if(verifica_fila_cheia(&novafila)){
				 	printf("\n\nfila cheia!\n\n");
				 	exibir_fila(&novafila);
				}
				else if(verifica_fila_vazia(&novafila)){
					printf("\n\nFila está vazia!");					 
				}
				else{
					printf("\n\nFila ainda comporta mais elementos.");
				}
			case 0:
				controle = 0;
			break;
			
		}
	}
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}

/*Tarefinha
1 - Dividir o arquivo em filas.h, main.cpp e um arquivo de protótipos - ok
2 - Implementar funções para manipular várias listas
3 - Finalizar a implementação do menu na main() - ok
4 - Criar uma arquivo .h para as mensagens de menu - ok
*/
