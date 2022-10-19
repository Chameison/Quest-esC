#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int i, vet[10], aux[10], j, k;
	for(i=0;i<10;i++){
		
		scanf("%d", &vet[i]);
		for(j=0;j<i; j++){
		if(vet[i]==vet[j]){
			printf("\nNumero repetido, entre com outro.\n");
			i--;
			
			continue;
			
			
		
		}
	}
	}

	for(i=0;i<10;i++){
		printf("\n%d", vet[i]);
	}
	system("pause");
	return 0;
}
