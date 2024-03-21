#include<stdio.h>


int intervalo(int maior,int menor){
	if(maior == menor){
		return menor;
	}else{
		return maior + intervalo(maior -1, menor);
	}
}

int main (){
	int maior,menor;
	printf("digite o maior numero\n");
	scanf("%i",&maior);
	printf("digite o menor numero\n");
	scanf("%i",&menor);
	printf("a soma do intervalo é igual a %i\n",intervalo(maior,menor));

	return 0;

}
			
