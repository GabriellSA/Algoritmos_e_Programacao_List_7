/*Elabore um algoritmo que armazene o c�digo funcional inteiro e respectivo sal�rio real de todos os
funcion�rios de uma empresa. Ap�s a leitura de todos os dados apresente o maior e o menor sal�rio entre
todos funcion�rios da empresa, usando um subprograma para encontrar o maior e outro para encontrar o
menor. Por fim, acione uma outra fun��o para calcular a m�dia salarial paga por esta empresa. O maior e
menor sal�rio dever�o ser apresentados por um procedimento acionado pelo algoritmo principal. A m�dia
salarial dever� ser apresentada por um procedimento acionado pela fun��o que calcula a m�dia.*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
 float maiorSalario(float maior, float aux2);
 float menorSalario(float menor, float aux2);
 void mediaSalario(float totalSalario, float total);
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	int aux, codigo[1000]={0}, codigoProvisorio;
 	float total, salario[1000]={0}, aux2, maior=0, menor=0, totalSalario=0;
 	
 	printf("Digite o n�mero de funcion�rios da empresa: ");
 	scanf("%f", &total);
	system("cls");
 	
	for(int i=0; i<total; i++){
	    do{
	 		aux=false;
	 		printf("Digite o c�digo funcional do %d� funcion�rio: ", i+1);
	 	    fflush(stdin);
	 	    scanf("%d", &codigoProvisorio);
	 	    for(int j=0; j<total; j++){
	 		    if(codigoProvisorio==codigo[j]){
	 			    printf("\nC�DIGO FUNCIONAL INV�LIDO!\nESSE C�DIGO J� PERTENCE A UM FUNCION�RIO!\n\n");
	 			    aux=true; break;
			 }
		 }
		 }while(aux==true);
		codigo[i]=codigoProvisorio;
		
		printf("Digite o sal�rio desse funcion�rio: ");
	    scanf("%f", &salario[i]);
	    aux2=0; aux2=salario[i];
		maior=maiorSalario(maior, aux2);
		menor=menorSalario(menor, aux2);
		totalSalario=totalSalario+salario[i];
	}
	system("cls");
	printf("\nO maior sal�rio da empresa � de R$ %.2f\n", maior);
	printf("\nO menor sal�rio da empresa � de R$ %.2f\n", menor);
	mediaSalario(totalSalario, total);
	
	printf("\n\n");
	system("pause");
	return 0;
	}
	
float maiorSalario(float maior, float aux2){
	float resultado=0;
	
	if(aux2>maior) resultado=aux2;
	else resultado=maior;
	 
	return resultado;
 }
 
float menorSalario(float menor, float aux2){
	float resultado=0;
	
	if(aux2<menor || menor==0) resultado=aux2;
	else resultado=menor;
	 
	return resultado;
 }
 
void mediaSalario(float totalSalario, float total){
 	float media=0;
 	
 	media=totalSalario/total;
 	printf("\nA m�dia salarial da empresa � de R$ %.2f", media);
 }
