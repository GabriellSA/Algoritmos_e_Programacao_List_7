 /*Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após este
cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento dos preços
cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda aumenta o percentual
informado pelo vendedor para todos os CDs. Será o vendedor que escolherá o tipo de aumento desejado.
Após os cálculos deverá ser apresentado o percentual de aumento e, para cada CD, o valor sem aumento e o
valor com aumento.*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
  int main(){
  	setlocale(LC_ALL, "Portuguese");
  	
  	int total, opcao, percentual;
  	float cd[100], cdAjuste[100];
  	
  	do{
 		printf("Digite o número de CDs que deseja cadastrar: ");
 	    scanf("%d", &total);
 	    if(total>100 || total<0)
 	        printf("\nLIMITE EXCEDIDO!\nDIGITE UM VALOR ENTRE 0 E 100!\n");
	 }while(total>100 || total<0);
	 system("cls");
	 
	 for(int i=0; i<total; i++){
	 	printf("Digite o preço do %dº CD: ", i+1);
	 	scanf("%f", &cd[i]);
	 }
	 system("cls");
	 printf("Escolha uma opção:\n");
	 printf("[1] - Aumento de 10 por cento no preço de todos os CDs\n");
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
	 	printf("%dº CD -> \tR$ %.2f\t\tR$ %.2f\n", y+1, cd[y], cdAjuste[y]);
	 }
	 printf("\n\n");
	 system("pause");
	 return 0; 
  }
  
