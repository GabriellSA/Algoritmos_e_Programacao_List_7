/*Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem (menos que
50). O n�mero de aluno ser� informado pelo usu�rio.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float notas[50], alunos;
	
	printf("Digite a quantidade de alunos da turma: ");
	scanf("%f", &alunos); 
	system("cls");
	for(int i=0; i<alunos; i++){
		printf("Digite a nota do %d� aluno: ", i+1);
		scanf("%f", &notas[i]);
	}
	system("cls");
	printf("As notas dos alunos s�o:\n");
	for(int j=0; j<alunos; j++){
		printf("%d� Aluno -> %.2f\n", j+1, notas[j]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
