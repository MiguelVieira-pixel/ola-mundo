#include <stdio.h>

main(){
	int num1, num2, soma = 0, subtracao = 0, multiplicacao = 0;
	float divisao = 0;
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
	
//	verificao operador

	switch(operacao){
//		adicao
		case '+':
			soma = num1 + num2;
			printf("\n %d %c %d = %d", num1, operacao, num2, soma);
			break;
//		subtracao
		case '-':
			subtracao = num1 - num2;
			printf("\n %d %c %d = %d", num1, operacao, num2, subtracao);
			break;
//		multiplicacao
		case '*':
			multiplicacao = num1 * num2;
			printf("\n %d %c %d = %d", num1, operacao, num2, multiplicacao);
			break;		
//		divisao
		case '/':
			if(num2 == 0)
			printf("ERRO!!!");
		else{
			divisao = num1 / num2;
			printf("\n %d %c %d = %.2f", num1, operacao, num2, divisao);
		}
		break;
			
	}	
}








