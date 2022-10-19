#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	printf("\nOla usuario, este programa faz a media de notas e tambem infroma quem possui a maior nota!");
	
 	int i, j, m[5][4], notaMaior, n, x;
 	float mediaFinal = 0;
	printf("\nDigite a quantidade de alunos na turma: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
	    printf("\nDigite o numero da Matricula do aluno  %d: ", i);
	    scanf("%d", &m[i][0]);
		
	    printf("A Média das provas é: "); 
	    scanf("%d", &m[i][1]);
	
	    printf("A Média dos trabalhos é: ");  
	    scanf("%d", &m[i][2]);
	
	    m[i][3] = (m[i][1] + m[i][2]) / 2;   
	    mediaFinal = m[i][3] + mediaFinal;
 	}
    notaMaior = m[i][3];
    for(i = 1; i <= n; i++){
        if(notaMaior < m[i][3]){
	        notaMaior = m[i][3];
	        x = i;
        }
    }

    printf("\nO aluno de matricula de número %d obteve a maior Nota Final\n", m[x][0]);
    printf("\nA Média Aritmética das notas finais: %f\n", mediaFinal/n);

    return 0;
}
