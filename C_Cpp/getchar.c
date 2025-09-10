#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo;
    printf("\n Digite o sexo[F\\M]: ");
    fflush(stdin);
    sexo = getchar();
    printf("\n O seu sexo = %c", sexo);
    system("pause > null");
}