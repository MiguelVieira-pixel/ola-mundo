#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[30];
    printf("\n Digite o seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("\n Oi %s", nome);
    system("pause > null");
}