 /*Fa�a um algoritmo que leia at� 30 letras e as escreva na ordem inversa (ou contr�ria) da que foram lidas.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	char letras[30];
 	
 	for(int i=0; i<5; i++){
 		printf("Digite a %d� primeira letra: ", i+1);
 		fflush(stdin);
 		scanf("%c", &letras[i]);
	 }
	 system("cls");
	 printf("A ordem contr�ria das letras digitadas �: \n");
	 for(int j=5; j>=0; j--){
	 	printf("\t%c\n", letras[j]);
	 }
	 printf("\n\n");
	 system("pause");
	 return 0;
 }
