#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

#define R 3
#define C 10
#define P1 1
#define P2 1
#define P3 1

int main(){
	setlocale (LC_ALL,"Portuguese");
	int notas[R][C]; 
    int i, j, menor, prova1, prova2, prova3, notaMenor, notaMenor2, notaMenor3;
    int a,b,c,d;
    printf("\nOla, usuario, este programa ler 3 provas de 10 alunos, e diz as piores!");
    printf("\nDigite a seguir os dados: \n");
    printf("Digite a nota 1 da prova 1: ");
    scanf("%d", &notaMenor);
    for (i = 0; i <P1 ; i++) { 
        printf("\nDigite as notas para a prova 1");
		for (j = 0; j < C-1; j++) {
            printf("\nDigite as notas para o aluno %d = ", j+2);
            scanf("%d", &notas[i][j]);
            if(notas[i][j] <= notaMenor){
                notaMenor=notas[i][j];   
			} 
              
	    }  
	    printf("\nDigite a nota 1 da prova 2: ");
   		scanf("%d", &notaMenor2);
	    for (a = 0; a <P2 ; a++) { 
        printf("\nDigite as notas para a prova 2");
		for (b = 0; b < C-1; b++) {
            printf("\nDigite as notas para o aluno %d = ", b+2);
            scanf("%d", &notas[a][b]);
            if(notas[a][b] <= notaMenor2){
                notaMenor2=notas[a][b];   
				} 
        	}  
	    }  
	    printf("\nDigite a nota 1 da prova 3: ");
   		scanf("%d", &notaMenor3);
	    for (c = 0; c < P3 ; c++) { 
        printf("\nDigite as notas para a prova 3");
		for (d = 0; d < C-1; d++) {
            printf("\nDigite as notas para o aluno%d = ", d+2);
            scanf("%d", &notas[c][d]);
            if(notas[c][d] <= notaMenor3){
                notaMenor3=notas[c][d];   
			}
            }
	    }
	}

	printf("\nNa prova 1 a menor nota foi: %d", notaMenor); 	
	printf("\nNa prova 2 a menor nota foi: %d", notaMenor2); 	
	printf("\nNa prova 3 a menor nota foi: %d", notaMenor3); 	

    return 0;              
   }
   
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
    
