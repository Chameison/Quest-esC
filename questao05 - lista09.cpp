#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
	setlocale (LC_ALL,"Portuguese");
	int vet[10]; 
	int i, aux;
	printf("\nOla usuario, este programa recebe 10 valores em um vetor e informa a localização de um dos valores!");
	
	for(i=1; i<=10; i++){ 
		printf("Digite o valor do vet[%d]: ", i);
		scanf("%d", &vet[i]); 
	}
	printf("\nUsuario, digite valor para comparacao: "); 
	scanf("%d", &aux); 
	
	for(i=1; i<=10; i++){ 
		if (aux==vet[i]){ 
		printf("\nO valor digitado esta na posicao vet[%d].", i); 
		}
	}
	
	return 0;
}
