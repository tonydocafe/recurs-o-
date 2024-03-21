#include<stdio.h>


int multiplicar(int multiplicando,int multiplicador){
	if(multiplicador <= 1){
		return multiplicando;
	}else{
		return multiplicando + multiplicar(multiplicando, multiplicador-1);
	}
}

int main (){
	int maior,menor;
	printf("digite um numero\n");
	scanf("%i",&maior);
	printf("digite outro numero\n");
	scanf("%i",&menor);
	printf("o resultado da multiplicação é : %i\n",multiplicar(maior,menor));

	return 0;

}
	
