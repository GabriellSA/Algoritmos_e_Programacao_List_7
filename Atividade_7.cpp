 /*Desenvolva um algoritmo que cadastre os pre�os de at� 100 diferentes CDs em uma loja. Ap�s este
cadastro, o algoritmo dever� possibilitar a execu��o de uma de duas fun��es para aumento dos pre�os
cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda aumenta o percentual
informado pelo vendedor para todos os CDs. Ser� o vendedor que escolher� o tipo de aumento desejado.
Ap�s os c�lculos dever� ser apresentado o percentual de aumento e, para cada CD, o valor sem aumento e o
valor com aumento.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
  int main(){
  	setlocale(LC_ALL, "Portuguese");
  	
  	int total, opcao, percentual;
  	float cd[100], cdAjuste[100];
  	
  	do{
 		printf("Digite o n�mero de CDs que deseja cadastrar: ");
 	    scanf("%d", &total);
 	    if(total>100 || total<0)
 	        printf("\nLIMITE EXCEDIDO!\nDIGITE UM VALOR ENTRE 0 E 100!\n");
	 }while(total>100 || total<0);
	 system("cls");
	 
	 for(int i=0; i<total; i++){
	 	printf("Digite o pre�o do %d� CD: ", i+1);
	 	scanf("%f", &cd[i]);
	 }
	 system("cls");
	 printf("Escolha uma op��o:\n");
	 printf("[1] - Aumento de 10 por cento no pre�o de todos os CDs\n");
	 printf("[2] - Escolher percentual para aumento\n");
	 scanf("%d", &opcao);
	 system("cls");
	 if(opcao==1){
	 	system("cls");
	    printf("PERCENTUAL DE AUMENTO: 10 POR CENTO\n\n");
	 	for(int j=0; j<total; j++){
	 		cdAjuste[j]=(cd[j]*0.1)+cd[j];
	    }
	}
	 else{
	    printf("Digite o percentual para aumento desejado: ");
	    scanf("%d", &percentual);
	    system("cls");
	    printf("PERCENTUAL DE AUMENTO: %d POR CENTO\n\n", percentual);
	    percentual=percentual/100;
	    for(int y=0; y<total; y++)
	 		cdAjuste[y]=(cd[y]*percentual)+cd[y];	 
	 }
	 printf("--------------- VALOR SEM AUMENTO / VALOR COM AUMENTO ---------------\n");
	 for(int y=0; y<total; y++){
	 	printf("%d� CD -> \tR$ %.2f\t\tR$ %.2f\n", y+1, cd[y], cdAjuste[y]);
	 }
	 printf("\n\n");
	 system("pause");
	 return 0; 
  }
  
