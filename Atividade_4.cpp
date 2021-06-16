 /*Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que foram lidas.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	char letras[30];
 	
 	for(int i=0; i<5; i++){
 		printf("Digite a %dº primeira letra: ", i+1);
 		fflush(stdin);
 		scanf("%c", &letras[i]);
	 }
	 system("cls");
	 printf("A ordem contrária das letras digitadas é: \n");
	 for(int j=5; j>=0; j--){
	 	printf("\t%c\n", letras[j]);
	 }
	 printf("\n\n");
	 system("pause");
	 return 0;
 }
