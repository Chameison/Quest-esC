#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


int funcaoSoma(int vet[], int tamanhoVetor){
	if(tamanhoVetor == 0){
		return 0;
	}else{
		return vet[tamanhoVetor - 1] + funcaoSoma(vet, tamanhoVetor - 1);
	}
}

int main(){
	//int vet[20];
	setlocale (LC_ALL,"Portuguese");
	printf("\nOla usuario, este programa usa a recursividade para calcular a soma de todos os valores de um vetor!");
	//for(i=0; i<=20; i++){
	//	printf("informe o valor %d para preencher o vetor", i) -- 
	//	scanf("%d", &vet[i]);
	//}
	int vet[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	printf("\nSoma dos valores do Vetor: %d\n", funcaoSoma(vet, 20));
	return 0;

}
