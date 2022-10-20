#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Avaliação de Algoritmos e programação */

char lquestao, Nobra[30];
int catoposto, catadjacente;
float hip, hip2, seno;

int main() {
	
	printf("Nome da disciplina: Algoritmos e Programacao \nNome da professor(a): Joyce Siqueira \nNome do aluno: Henrique Moraes Farias \nMatricula: UC22200106 \nCurso: Analise e Desenvolvimento de Sistemas \nLink do repositorio no GitHub: https://github.com/henriquemoraescod/Avalia-o-de-Algoritmos-e-Programa-o \nSoftware utilizado: DevC++");
	printf("\n\nDigite qual questao voce deseja acessar: ");
	scanf("%c", &lquestao);
	
	switch(lquestao){
	
		printf("\n\nDigite qual questao voce deseja acessar: ");
		scanf("%c", &lquestao);
		
		case 'a':
				printf("\n\tEsta questao calcula a hipotenusa");
				
				printf("\n\nDigite o cateto oposto: ");
				scanf("%d", & catoposto);
			
				printf("\nDigite o cateto adjacente: ");
				scanf("%d", &catadjacente);
			
		hip = (catoposto*catoposto) + (catadjacente*catadjacente);
		hip2 = sqrt(hip);
		seno = catoposto/hip2;
		
				printf("\tResultado:");
				printf("\n\nA hipotenusa e igual a: %.3f", hip2);
				printf("\nO seno e igual a: %.3f", seno);
			
		break;
			
	}
	
	
	
	
	
	return 0;
}
