/*Elabore um algoritmo que armazene o código funcional inteiro e respectivo salário real de todos os
funcionários de uma empresa. Após a leitura de todos os dados apresente o maior e o menor salário entre
todos funcionários da empresa, usando um subprograma para encontrar o maior e outro para encontrar o
menor. Por fim, acione uma outra função para calcular a média salarial paga por esta empresa. O maior e
menor salário deverão ser apresentados por um procedimento acionado pelo algoritmo principal. A média
salarial deverá ser apresentada por um procedimento acionado pela função que calcula a média.*/

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
 	
 	printf("Digite o número de funcionários da empresa: ");
 	scanf("%f", &total);
	system("cls");
 	
	for(int i=0; i<total; i++){
	    do{
	 		aux=false;
	 		printf("Digite o código funcional do %dº funcionário: ", i+1);
	 	    fflush(stdin);
	 	    scanf("%d", &codigoProvisorio);
	 	    for(int j=0; j<total; j++){
	 		    if(codigoProvisorio==codigo[j]){
	 			    printf("\nCÓDIGO FUNCIONAL INVÁLIDO!\nESSE CÓDIGO JÁ PERTENCE A UM FUNCIONÁRIO!\n\n");
	 			    aux=true; break;
			 }
		 }
		 }while(aux==true);
		codigo[i]=codigoProvisorio;
		
		printf("Digite o salário desse funcionário: ");
	    scanf("%f", &salario[i]);
	    aux2=0; aux2=salario[i];
		maior=maiorSalario(maior, aux2);
		menor=menorSalario(menor, aux2);
		totalSalario=totalSalario+salario[i];
	}
	system("cls");
	printf("\nO maior salário da empresa é de R$ %.2f\n", maior);
	printf("\nO menor salário da empresa é de R$ %.2f\n", menor);
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
 	printf("\nA média salarial da empresa é de R$ %.2f", media);
 }
