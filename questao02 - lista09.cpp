#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    setlocale (LC_ALL,"Portuguese");
	int i, aux, impar, num;
	int vetor[10];
	int vetor1[10];
	for(i=1;i<=10;i++){
		printf("\nDigite o numero inteiro para ocupar na posição %d", i);
		scanf("%d", num);
		vetor[i] = num;
		printf("\no vetor momentaneo é : %d", vetor[i]);
	
		if(num % 2 == 0){
			printf("\nÉ par, nao queremos!");
		}else{
			vetor1[i] = num;
			printf("\nO numero em questao %d é impar!", num); 
		}

	}
	printf("\nO vetor é: %d", vetor[10]);
	printf("\nO segundo vetor, que é com impares é: %d", vetor1[10]);


}
