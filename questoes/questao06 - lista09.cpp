#include <stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define TM 10
#define TA 3

int main(){
	setlocale (LC_ALL,"Portuguese");
	printf("\nOla usuario, este programa ler a prova de 3 alunos, o gabarito e diz qual a nota do aluno e a porcentagem de aprovação!");
	char vet[TM];
	int alunos[TA], nota[TA], i;
	int notaTotal=0, aprovado=0;
	
	for(i=0; i < TM; i++){
		printf("Resposta da questão %d:", i+1);
		vet[i] = toupper( getche() );
		printf("\n");
	}
	for(i=0; i < TA; i++){
		printf("Digite a matricula do aluno %d: ", i+1);
		scanf("%d", &alunos[i]);
		notaTotal = 0;
		for(int j = 0; j< TM; j++){
			printf("Resposta questão %d: ", j+1);
			if(vet[j] ==toupper( getche() ) ){
				notaTotal++;
			}
			printf("\n");		
		}
		nota[i] = notaTotal;
	}
	for(int j = 0; j < TA; j++){
		printf("Aluno %d nota = %d\n", alunos[j], nota[j]);
		if(nota[j] >= 7){
			aprovado++;
		}
	}
	printf("%% de provados = %f", float((aprovado * 100)/TA) );
}
