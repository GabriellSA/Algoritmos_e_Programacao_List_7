 /*Fa�a um algoritmo que leia um vetor de at� 80 elementos. Ap�s a leitura de todos os dados, leia um
n�mero e verifique se existem elementos no vetor iguais ao n�mero lido. Se existirem, escrever, em uma tela
limpa, quantas vezes eles aparecem e quais as posi��es em que eles est�o armazenados no vetor.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	float numero[80], consulta, repete=0;
 	
 	for(int i=0; i<80; i++){
 		printf("Digite o valor do %d� elemento: ", i+1);
 		scanf("%f", &numero[i]);
	 }
	 system("cls");
	 printf("Digite o valor do elemento que deseja consultar: ");
	 scanf("%f", &consulta);
	 system("cls");
	 printf("O elemento consultado aparece nas seguintes posi��es do vetor: \n");
	 for(int j=0; j<80; j++){
	 	if(numero[j]==consulta){
	 		repete++;
	 		printf("\t%d\n", j);
		 }
	 }
	 printf("\nSe repete ent�o %.0f vezes.\n\n", repete);
	 system("pause");
	 return 0;
 }
