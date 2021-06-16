 /*Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, leia um
número e verifique se existem elementos no vetor iguais ao número lido. Se existirem, escrever, em uma tela
limpa, quantas vezes eles aparecem e quais as posições em que eles estão armazenados no vetor.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	float numero[80], consulta, repete=0;
 	
 	for(int i=0; i<80; i++){
 		printf("Digite o valor do %dº elemento: ", i+1);
 		scanf("%f", &numero[i]);
	 }
	 system("cls");
	 printf("Digite o valor do elemento que deseja consultar: ");
	 scanf("%f", &consulta);
	 system("cls");
	 printf("O elemento consultado aparece nas seguintes posições do vetor: \n");
	 for(int j=0; j<80; j++){
	 	if(numero[j]==consulta){
	 		repete++;
	 		printf("\t%d\n", j);
		 }
	 }
	 printf("\nSe repete então %.0f vezes.\n\n", repete);
	 system("pause");
	 return 0;
 }
