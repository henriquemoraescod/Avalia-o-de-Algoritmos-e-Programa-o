#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Avaliação de Algoritmos e programação */

char lquestao, Nobra[30], sitobra1[30];
int catoposto, catadjacente, sitobra, mesinicio, mestermino, tempodeex;
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
			
		case 'b':
				printf("\n\tOpcao invalida");
				
		break;
			
		case 'c': 
				printf("\n\tEsta questao levanta os dados da obra");
				printf("\n\nDigite o nome da obra: ");
				fflush(stdin);
				scanf("%s", &Nobra);
				printf("Digite o numero correspondente a situacao: ");
				fflush(stdin);
				scanf("%d", &sitobra);	
				printf("Digite o mes de inicio: ");
				fflush(stdin);
				scanf("%d", &mesinicio);
				printf("Digite o mes de termino: ");
				fflush(stdin);
				scanf("%d", &mestermino);
				
		tempodeex = mestermino - mesinicio;
		
	
				printf("\n\n\t Nome da obra: %s", Nobra);
				printf("\n\t Tempo de execucao: %d meses", tempodeex);
				
			printf("\n\tSituacao:");if(sitobra==1){
					printf("Obra concluida");
				}else if(sitobra==2){
					printf("Problemas no projeto");
				}else if(sitobra==3){
					printf("Atraso nos repasses financeiros");
				}else if(sitobra==4){
					printf("Greve dos trabalhadores");
				}else if(sitobra==5){
					printf("Falta de materiais");
				}else if(sitobra==6){
					printf("Falta de equipamentos");
				}
			
						
			
			
		
	}
	
	
	
	
	
	return 0;
}
