/*Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além de
identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha pode aparecer em
mais de uma posição.*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	int total, idade[100], maior=0;
 	float media, idadeTotal=0;
 	
 	do{
 	printf("Digite o número total de pessoas: ");
 	scanf("%d", &total);
 	if(total>100 || total<0)
 	    printf("\nLIMITE EXCEDIDO!\nDIGITE UM VALOR ENTRE 0 E 100!\n\n");
	}while(total>100 || total<0);
	system("cls");
	
	for(int i=0; i<total; i++){
		printf("Digite a idade da %dº pessoa: ", i+1);
		fflush(stdin);
		scanf("%d", &idade[i]);
		idadeTotal=idadeTotal+idade[i];
		if(idade[i]>maior){
			maior=idade[i];
		}
	}
    
    system("cls");
	media=idadeTotal/total;
	printf("A média de idade entre todas as pessoas é de %.2f anos.\n\n", media);
	printf("As pessoas mais velhas possuem %d anos e estão nos vetores: \n", maior);
	for(int i=0; i<total; i++){
		if(idade[i]==maior){
			printf("-> %d\n", i);
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
 }
