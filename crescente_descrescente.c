#include<stdio.h>


void decrescente(int n){
	if(n > 0){
		printf("%i ",n);
		decrescente(n-1);
	}
	
}

void crescente(int n){
	if(n > 0){
		crescente(n-1);
		printf("%i ",n);
	
	}
}
int main(){
	decrescente(5);
	printf("\n");
	crescente(5);
	printf("\n");
	return 0;
}

		
