#include <stdio.h>
#include <string.h>

int main() {
    char senhaCadastrada[6] ="12345";
    char senhaColocada[6];

    printf("\n Digite uma senha: ");
    gets(senhaColocada);
    if(strcmp(senhaCadastrada, senhaColocada) == 0)
        printf("\n Senha correta");
    else
        printf("\n Senha incorreta");
}