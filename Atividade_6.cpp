 /*Fazer um algoritmo/programa que leia a matricula e o sal�rio dos funcion�rios de uma empresa (m�ximo
de 100 funcion�rios). Ap�s a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e
menor sal�rio dos funcion�rios. O maior e menor sal�rio dever�o ser obtidos, cada um, por uma fun��o.
Sabe-se ainda que n�o existe matr�cula repetida na empresa.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
float maiorSalario(float maior, float aux2);
float menorSalario(float menor, float aux2);
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	int total, aux, matricula[100], matriculaProvisoria;
 	float aux2, salario[100], maior=0, menor=0;
 	
 	do{
 		printf("Digite o n�mero de funcion�rios da empresa: ");
 	    scanf("%d", &total);
 	    if(total>100 || total<0)
 	        printf("\nLIMITE EXCEDIDO!\nDIGITE UM VALOR ENTRE 0 E 100!\n");
	 }while(total>100 || total<0);
	 system("cls");
 	
	 for(int i=0; i<total; i++){
	 	do{
	 		aux=false;
	 		printf("Digite a matr�cula do %d� funcion�rio: ", i+1);
	 	    fflush(stdin);
	 	    scanf("%d", &matriculaProvisoria);
	 	    for(int j=0; j<total; j++){
	 		    if(matriculaProvisoria==matricula[j]){
	 			    printf("\nMATR�CULA INV�LIDA!\nESSA MATR�CULA J� PERTENCE A UM FUNCION�RIO!\n\n");
	 			    aux=true; break;
			 }
		 }
		 }while(aux==true);
		matricula[i]=matriculaProvisoria;
		
		printf("Digite o sal�rio desse funcion�rio: ");
	    scanf("%f", &salario[i]);
	    printf("\n");
	    aux2=0; aux2=salario[i];
		maior=maiorSalario(maior, aux2);
		menor=menorSalario(menor, aux2);	
	 }
	 
	 system("cls");
	 printf("------------- MATR�CULA / SAL�RIO -------------\n\n");
	 for(int j=0; j<total; j++){
	 	printf("\t\tN�: %d\t\tR$ %.2f\n", matricula[j], salario[j]);
	 }
	 printf("\nO maior sal�rio �: R$ %.2f", maior);
	 printf("\nO menor sal�rio �: R$ %.2f\n\n", menor);
	 
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
