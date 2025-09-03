#include <stdio.h>

main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", & num);

    //se numero maior que 10 ou menor que 10
    if(num > 10)
        printf("\n Numero e maior que 10");
    else if(num < 10)
        printf("\n Numero e menor que 10");
    else
        printf("\n Numero e igual a 10");
}