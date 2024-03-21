#include<stdio.h>
#include<string.h>



//LETRA A
void preencher_vetor(int vetor[], int n){
	if(n > 0){
		preencher_vetor(vetor,n-1);
		scanf("%d",&vetor[n-1]);
		
	}
	
}
//LETRA B
void decrescente(int vetor[],int n){
	if(n > 0){
		printf("%i ",vetor[n-1]);
		decrescente(vetor, n-1);
	}
	
}

void crescente(int vetor[],int n){
	if(n >0){
		crescente(vetor,n-1);
		printf("%i ",vetor[n-1]);
	
	}
}
int main(){
	int tamanho;
	printf("escolha um tamanho para o vetor\n");
	scanf("%i", &tamanho);
	int vetor[tamanho];
	preencher_vetor(vetor,tamanho);
	crescente(vetor,tamanho);
	printf("\n");
	decrescente(vetor,tamanho);
	printf("\n");
	return 0 ;

}
