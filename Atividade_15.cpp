/*Alterar o algoritmo de ordena��o de caracteres para pesquisar um caractere espec�fico.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int total;
	char letra[100], caractere;	
	
	printf("Informe o n�mero de letras: ");
	fflush(stdin);
	scanf("%d", &total);	
	
	for(int i=1; i<=total; i++){
		printf("Informe a %d� letra: ", i);
		fflush(stdin);
		scanf("%c", &letra[i]);
	}
	
	printf("Informe o caractere que deseja procurar: ");
	fflush(stdin);
	scanf("%c", &caractere);	
	for(int i=1; i<=total; i++){
		if(letra[i]==caractere)
			printf("\nO caractere pesquisado esta na %d� posi��o",i);
	}
	printf("\n\n");
	system("pause");	
	return 0;
}
