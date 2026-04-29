#include <stdio.h>

main() {
    int num;

    printf("\n Digite um numero: ");
    scanf("%d", & num);

    //se num e igual a 9, 10, 11
    switch(num) 
    {
        case 9:
            printf("\n Numero = %d", num);
            break;
        case 10:
            printf("\n Numero = %d", num);
            break;
        case 11:
            printf("\n Numero = %d", num);
            break;
        default:
            printf("\n Numero nao e 9, 10 e 11");
    }
}