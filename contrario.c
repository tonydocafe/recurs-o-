#include<stdio.h>
#include<string.h>


void decrescente(char palavra[], int n){
	if(n >= 0){
		printf("%c ",palavra[n]);
		decrescente(palavra,n-1);
	}
	
}

int main(){
	char palavra[] = {'a','b','c','d','e','f'};
	int tamanho = strlen(palavra);
	decrescente(palavra,tamanho);
	printf("\n");
	return 0 ;

}
