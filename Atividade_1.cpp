/* Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float notas[30];
	
	for(int i=0; i<4; i++){
		printf("Digite a nota do %dº aluno: ", i+1);
		scanf("%f", &notas[i]);
	}
	system("cls");
	printf("As notas dos alunos são:\n");
	for(int j=0; j<4; j++){
		printf("%dº Aluno -> %.2f\n", j+1, notas[j]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
