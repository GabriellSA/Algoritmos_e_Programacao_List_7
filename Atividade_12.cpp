/*Uma grande empresa deseja saber quais os três empregados mais recentes. Fazer um algoritmo para ler
um número indeterminado de informações (máximo de 50) contendo a matrícula funcional do empregado e
o número de meses de trabalho deste empregado. Mostre os três empregados mais recentes. Não existem
dois empregados admitidos no mesmo mês e a matrícula igual a zero ‘0’ encerra a leitura. */

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
	 		printf("Digite a matrícula funcional do %dº funcionário: ", i+1);
	 	    fflush(stdin);
	 	    scanf("%d", &matriculaProvisoria);
	 	    
			if(matriculaProvisoria!=0){
				for(int a=0; a<5; a++){
	 		    	if(matriculaProvisoria==matricula[a]){
		 			    printf("\nMATRÍCULA FUNCIONAL INVÁLIDA!\nESSA MATRÍCULA FUNCIONAL JÁ PERTENCE A UM FUNCIONÁRIO!\n\n");
		 			    aux=true; break;
			    	}
		    	}
			}
		 }while(aux==true);
		
		if(matriculaProvisoria!=0){
			matricula[i]=matriculaProvisoria; 	
		
	    	do{
	    		aux=false;
	    		printf("Digite a quantidade de meses trabalhado por esse funcionário: ");
	    		fflush(stdin);
	    	    scanf("%d", &mesesProvisorio);
	    	    for(int b=0; b<5; b++){
		 	        if(mesesProvisorio==meses[b]){
		 			    printf("\nDATA DE ADMISSÃO INVÁLIDA!\nJÁ EXISTE UM FUNCIONÁRIO CONTRATO NESSE MÊS!\n\n");
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
	printf("Os 3 empregados mais recentes são:\n\nMATRÍCULA\tMESES TRABALHADOS\n");
	for(int y=1; y<=3; y++){
		printf("   %d\t\t\t%d\n", matricula[y], meses[y]);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
