#include <stdio.h>

main(){
	int num1, num2, soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0;
	char operacao;
	
//	entrada
	printf("\n Digite um numero: ");
	scanf("%d",& num1);
	printf("\n Digite outro numero: ");
	scanf("%d",& num2);
	printf("\n Digite a operacao:");
	printf("\n '+'----adicao");
	printf("\n '-'----subtracao");
	printf("\n '*'----multiplicacao");
	printf("\n '/'----divisao\n");
	fflush(stdin);
	operacao = getchar();
	
//	verificacao do operador
//	adicao
	if(operacao == '+'){    
		soma = num1 + num2;
		printf("\n A soma de %d e %d = %d", num1, num2, soma);
	}
//	subtracao
	else if(operacao == '-'){
		subtracao = num1 - num2;
		printf("\n A subtracao de %d e %d = %d", num1, num2, subtracao);
	}
//	multiplicacao	
	else if(operacao == '*'){
		multiplicacao = num1 * num2;
		printf("\n A multiplicacao de %d e %d = %d", num1, num2, multiplicacao);
	}
//	divisao
	else if(operacao == '/'){
		if(num2 == 0)
			printf("ERRO!!!");
		else{
			divisao = num1 / num2;
			printf("\n A divisao de %d e %d = %d", num1, num2, divisao);
		}
	}
	else
		printf("\n operacao errada.");
			
}













