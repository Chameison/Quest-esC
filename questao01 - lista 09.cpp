#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    setlocale (LC_ALL,"Portuguese");
	int vetor[50];
	int i = 0, aux = 0, variavel = 0;
	printf("\nOla usuario, este programa cria um vetor de tamanho 50 e imprime uma conta em questão a cada valor");
	
	for(i=0;i<=vetor[50];i++){
		aux = ((i + (5 *i))%(i+1));
		printf("\nO valor da conta em questão é %d", aux);
		
	}

}
