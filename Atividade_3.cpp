/*Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel composta
unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.*/

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
		printf("Digite o %d� valor: ", i+1);
		scanf("%f", &dados[i]);
		soma=soma+dados[i];
	}
	system("cls");
	printf("O somat�rio dos dados �: %.2f\n\n", soma);
	
	system("pause");
	return 0;
}
