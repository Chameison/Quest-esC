#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int  par, impar, somaPar, somaImpar, i, contPar, contImpar;
	int num[6]; 

	setlocale (LC_ALL,"Portuguese");
	printf("\nOlá usuario, este programa recebe 6 numeros e diz se é par, impar e faz soma! \n");
	for(i=1;i<=6;i++){
		printf("\nDigite o %d numero: ", i);
		scanf("%d", &num[i]);
		if(num[i]%2==0){

			contPar += 1;
			somaPar += num[i];
		}else{
			contImpar += 1;
			somaImpar += num[i];
			
		}	
	}
	printf("\nA soma dos numeros pares é %d ", somaPar);
	printf("\nA soma dos numeros impares é %d", somaImpar);
	printf("\nA quantidade de pares foi: %d", contPar);
	printf("\nA quantidade de impares foi: %d", contImpar);
	printf("\nOs numeros pares e impares digitados foram digitados foram : ");  
     for(i=1; i<=6;i++)  
     {  
         if(num[i] % 2 == 0){
		 	printf("\nN° %d PAR i);	
            printf("%d\n ",num[i]);    
     	}else{
			printf("\nN° %d IMPAR: ", i);
            printf("%d\n ",num[i]);
   
		 }
	 }  
     
	 	
}
