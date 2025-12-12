#include<stdio.h>
#include<stdlib.h>
#include "D:\projeto\ola-mundo\C_Cpp\mostra.h"

void ler_dados(char &sexo, float &altura){
	printf("\n Digite o sexo: [M/F]: ");
	fflush(stdin);
	sexo = getchar();
	printf("\n Digite a sua altura: ");
	scanf("%f", &altura);
}


main() {
	char sexo;
	float altura;
	
	ler_dados(sexo, altura);
	printf("O peso ideal = %.2f KG", mostra(sexo, altura));
	
}
