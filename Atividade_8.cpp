/*Fazer um algoritmo que leia até 30 caracteres e os ordene em ordem decrescente. É considerado que A <
B < C < ... (ordem alfabética).*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	int total, aux;
 	char caracter[30];
 	
 	do{
 	printf("Digite a quantidade de caracteres que deseja ordenar: ");
 	scanf("%d", &total);
 	if(total>30 || total<0)
 	    printf("\nLIMITE EXCEDIDO!\nDIGITE UM VALOR ENTRE 0 E 30!\n\n");
	}while(total>30 || total<0);
	system("cls");
	
	for(int i=0; i<total; i++){
		printf("Digite o %dº caracter: ", i+1);
		fflush(stdin);
		scanf("%c", &caracter[i]);
	}
	
	system("cls");
	for(int j=0; j<total; j++){                   
		for(int y=0; y<total; y++){
			if(caracter[j]>caracter[y]){          
				aux=caracter[j];                  
				caracter[j]=caracter[y];          
				caracter[y]=aux;
			}
		}
	}
	printf("A ordem decrescente dos caracteres digitados é: \n");
	for(int i=0; i<total; i++){
		printf("\t%c\n", caracter[i]);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
 }
