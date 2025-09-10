#include <stdio.h>

main() {
	int num1, num2, soma = 0;	
	
	printf("\n Digite um numero inteiro: ");
	scanf("%d", & num1);
	printf("\n Digite outro numero inteiro: ");
	scanf("%d", & num2);
	soma = num1 + num2;
	
	//se soma > 20 adiciona 8
	if(soma > 20){
		soma = soma + 8;
		printf("\n Soma + 8 = %d", soma);
	}
	//se soma <= 20 subtrai 5	
	else{
		soma = soma - 5;
		printf("\n Soma - 5 = %d", soma);
	}
}
