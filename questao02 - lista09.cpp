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
		printf("\nDigite o numero inteiro para ocupar na posi��o %d", i);
		scanf("%d", num);
		vetor[i] = num;
		printf("\no vetor momentaneo � : %d", vetor[i]);
	
		if(num % 2 == 0){
			printf("\n� par, nao queremos!");
		}else{
			vetor1[i] = num;
			printf("\nO numero em questao %d � impar!", num); 
		}

	}
	printf("\nO vetor �: %d", vetor[10]);
	printf("\nO segundo vetor, que � com impares �: %d", vetor1[10]);


}
