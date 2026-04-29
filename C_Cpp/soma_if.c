#include <stdio.h>

main() {
	int num1, num2, soma = 0;
	
	printf("\n Digite um numero: ");
	scanf("%d", & num1);
	printf("\n Digite outro numero: ");
	scanf("%d", & num2);
	
	//soma
	soma = num1 + num2;
	if(soma >= 10)
		printf("\n Soma = %d", soma);
}
