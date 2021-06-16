/*Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável composta
unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float dados[100], total, soma=0;
	
	printf("Digite a quantidade de dados que deseja somar: ");
	scanf("%f", &total);
	system("cls");
	for(int i=0; i<total; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%f", &dados[i]);
		soma=soma+dados[i];
	}
	system("cls");
	printf("O somatório dos dados é: %.2f\n\n", soma);
	
	system("pause");
	return 0;
}
