/*Escrever um algoritmo que solicite e leia letra por letra o nome completo de uma pessoa. O caractere
sustenido “#” indica o fim do nome. Depois de lê-lo apresente todo o nome informado, sem o #.*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	int i=1, j=0;
 	char letra[100];
 	
 	printf("Digite letra por letra o seu nome\n");
 	while(true){
 		printf("Digite a %dº letra: ", i);
 		fflush(stdin);
 		scanf("%c", &letra[i]);	
 		if(letra[i]=='#') break;
 		i++;
	}
	system("cls");
	printf("Seu nome é:\n");
	while(letra[j]!='#'){
		printf("%c", letra[j]);
		j++;
	}
	printf("\n\n");
	system("pause");
	return 0;
	
 }
