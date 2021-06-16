 /*Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80 notas, variando
de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de cada nota e apresente uma
tabela contendo os valores das notas e suas respectivas frequências.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int total, notas[80], repetidas[80], frequencia[80], y, i, k=0, j;	
	
	printf("Digite quantas notas deseja inserir no programa: ");
	scanf("%d", &total);	
	
	for(i=0;i<total;i++){
		do{
			printf("Informe a %dº nota: ", i+1);
			scanf("%d", &notas[i]);
			if(notas[i]<0||notas[i]>10)
				printf("\nNOTA DIGITADA INVÁLIDA!\nDIGITE UM VALOR ENTRE 0 E 10\n\n");
		}while(notas[i]<0 || notas[i]>10);	
	}
	
	for(i=0; i<total; i++){
		for(j=0; j<total; j++){
			if(notas[i] == notas[j]){
				repetidas[k] = notas[i];
				k++;
				for(y=0; y<k; y++){
				if(repetidas[y] == repetidas[y+1]) 
					k--; 
				}
			}				
		}
	}
	
	for(i=0; i<k; i++){
		frequencia[i]= 0;
		for(j=0; j<total; j++){
			if(repetidas[i] == notas[j]){
				frequencia[i]+=1;
			}
		}
	}
	
	system("cls");
	printf("\n");
	for(i=0; i<k; i++){
		printf("A nota %d se repetiu %d vezes\n", repetidas[i], frequencia[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
