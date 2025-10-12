#include <stdio.h>

main() {
    int num1, num2, resul;
    char operador;
    float divisao = 0;

    // entrada
    printf("\n Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("\n Digite outro numero inteiro: ");
    scanf("%d", &num2);
    printf("\n Digite o operador");
    printf("\n '+'----adicao");
	printf("\n '-'----subtracao");
	printf("\n '*'----multiplicacao");
	printf("\n '/'----divisao");
    fflush(stdin);
    operador = getchar();

    // operação
    switch (operador){
        case '+':
            resul = num1 + num2;
            printf("\n %d %c %d", num1, operador, num2);
            break;
        case '-':
            resul = num1 - num2;
            printf("\n %d %c %d", num1, operador, num2);
            break;
        case '*':
            resul = num1 * num2;
            printf("\n %d %c %d", num1, operador, num2);
            break;
        case '/':
            if(num2 = 0)
                printf("ERRO");
            else{
                divisao = num1 / num2;
                printf("\n %d %c %d", num1, operador, num2);
            }
            break;
        default:
            printf("operador errado.");
            break;
    }
    
}