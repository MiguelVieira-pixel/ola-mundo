#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont = 125;
    float taxa = 1.2, taxaAnual = 1.4;
    char sexo = 'F';
    char nome[11] = "Largatixq";

    printf("\n nome = %s", nome);
    printf("\n sexo = %c", sexo);
    printf("\n conta = %d", cont);
    printf("\n valor da taxa = %.2f", taxa);
    printf("\n valor da taxa anual = %.2f", taxaAnual);
    system("pause > null");
}