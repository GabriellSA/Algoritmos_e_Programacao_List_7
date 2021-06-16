/*Ler um vetor A e B, cada um com 10 elementos. Gerar uma matriz C onde cada elemento corresponde a
A + B. Pesquise um dado fornecido pelo usuário no vetor C*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 
  int main(void){
  	setlocale(LC_ALL, "Portuguese");
	
	int A[10], B[10], C[10], i, j, pesquisa;	
	
	for(i=0; i<10; i++){
		printf("Digite o %dº valor da matriz A: ", i+1);
		scanf("%d", &A[i]);
	}
	printf("\n");
	
	for(i=0; i<10; i++){
		printf("Digite o %dº valor da matriz B: ",i+1);
		scanf("%d", &B[i]);
	}	
	system("cls");
	
	for(i=0; i<10; i++){
		C[i]=A[i]+B[i];
		printf("%d + %d = %d\n",A[i],B[i],C[i]);
	}
	
	printf("\nDigite o número que deseja pesquisar: \n");
	scanf("%d", &pesquisa);
	
	for(i=0; i<10; i++){
		if(C[i]==pesquisa)
			printf("O número pesquisado esta posição %d\n\n",i+1);
	}
	system("pause");	
	return 0;
  }
  	
