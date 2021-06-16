/*Uma grande empresa deseja saber quais os tr�s empregados mais recentes. Fazer um algoritmo para ler
um n�mero indeterminado de informa��es (m�ximo de 50) contendo a matr�cula funcional do empregado e
o n�mero de meses de trabalho deste empregado. Mostre os tr�s empregados mais recentes. N�o existem
dois empregados admitidos no mesmo m�s e a matr�cula igual a zero �0� encerra a leitura. */

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 #include<string.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	int matricula[50]={0}, matriculaProvisoria, meses[50]={0}, mesesProvisorio, i=0, aux, aux2;
 	
 	do{
	    do{
	 		aux=false;
	 		printf("Digite a matr�cula funcional do %d� funcion�rio: ", i+1);
	 	    fflush(stdin);
	 	    scanf("%d", &matriculaProvisoria);
	 	    
			if(matriculaProvisoria!=0){
				for(int a=0; a<5; a++){
	 		    	if(matriculaProvisoria==matricula[a]){
		 			    printf("\nMATR�CULA FUNCIONAL INV�LIDA!\nESSA MATR�CULA FUNCIONAL J� PERTENCE A UM FUNCION�RIO!\n\n");
		 			    aux=true; break;
			    	}
		    	}
			}
		 }while(aux==true);
		
		if(matriculaProvisoria!=0){
			matricula[i]=matriculaProvisoria; 	
		
	    	do{
	    		aux=false;
	    		printf("Digite a quantidade de meses trabalhado por esse funcion�rio: ");
	    		fflush(stdin);
	    	    scanf("%d", &mesesProvisorio);
	    	    for(int b=0; b<5; b++){
		 	        if(mesesProvisorio==meses[b]){
		 			    printf("\nDATA DE ADMISS�O INV�LIDA!\nJ� EXISTE UM FUNCION�RIO CONTRATO NESSE M�S!\n\n");
		 			    aux=true; break;
				    }
			    }
			}while(aux==true);
			meses[i]=mesesProvisorio;
			i+=1;
		}	

    }while(matriculaProvisoria!=0 && i<5);
 
    		for(int y=0; y<5; y++){	
		    for(int k=0; k<5; k++){
		        if(meses[y]<meses[k]){
			        aux2=meses[y];
			        meses[y]=meses[k];
			        meses[k]=aux2;
			        aux2=matricula[y];
		         	matricula[y]=matricula[k];
			        matricula[k]=aux2;
			}
		}
	}
    
 	system("cls");
	printf("Os 3 empregados mais recentes s�o:\n\nMATR�CULA\tMESES TRABALHADOS\n");
	for(int y=1; y<=3; y++){
		printf("   %d\t\t\t%d\n", matricula[y], meses[y]);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
