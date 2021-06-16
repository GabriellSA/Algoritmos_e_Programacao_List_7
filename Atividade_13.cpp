/*Fazer um algoritmo que:
a) leia uma frase de até 80 caracteres, incluindo os brancos
b) conte quantos caracteres em branco existem na frase
c) conte quantas vezes a letra ‘a’ ou ‘A’ aparece
d) conte quantas vezes ocorre um mesmo par de letras na frase e quais são elas;
e) apresente o que foi calculado nos itens b, c e d*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 #include<string.h>
 
  int main(void){
  	setlocale(LC_ALL, "Portuguese");
  	
  	char frase[80], letras[80][2], letra=0;
  	int branco=0, letra_a=0, contador, k=0;
  	
  	do{
  		printf("Digite uma frase: ");
  		fflush(stdin);
  		fgets(frase, 80, stdin);
  		if(strlen(frase)>80)
  			printf("\nLIMITE EXCEDIDO!\nA FRASE DEVE CONTER ATÉ 80 CARACTERES NO MÁXIMO!\n\n");
	  }while(strlen(frase)>80);
	  
	  	while (frase[k]!='\0'){
		k++;
		}
	  
	for(int i=0; i<k; i++){
		if(frase[i]==' ')
			branco++;
		if(frase[i]=='a' || frase[i]=='A')
			letra_a++;	
	}
	int y=0;
	for(int i=0; i<k; i++) letras[i][2]=0;
	
	for (int i=0; i<k; i++){
		int contador=0;
		for (int j=0; j<k-1; j++){
			if ((int)frase[i] == (int)frase[j]){
				letras[y][0] = (int)frase[j];
				contador++;
			}
		}

		letras[y][1] = contador;
		for (int j=0; j<k-1; j++){
			if (letras[y][0] == letras[j][0] && y > j) y--;
		}	
		y++;
	}
	
	printf("\nCaracteres em branco: %d\n", branco);
	printf("Caracteres A ou a: %d\n", letra_a);
	for (int j=0; j<y; j++){
		printf("\nLetra: %c\n", letras[j][0]);
		printf("Quantidade = %d\n", letras[j][1]);
	}
	printf("\n\n");
	system("pause");
	return 0;	
  }

