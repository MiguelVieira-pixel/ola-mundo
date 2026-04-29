#include <stdio.h>

float calculo1(float a, float b, float c){
	return(((2 + a)/(b + 3)) - (2 * c));
}

float calculo2(float a, float b, float c){
	return((2 * b + 5 + 3 * a) / (2 * c));
}

float entrada_dados(float &a, float &b, float &c) {
	printf("\n Digite o numero A: ");
	scanf("%f", &a);
	printf("\n Digite o numero B: ");
	scanf("%f", &b);
	printf("\n Digite o numero C: ");
	scanf("%f", &c);
}

main() {
	float a, b, c;
	entrada_dados(a, b, c);
	printf("\n Valor do retorno do calculo 1 = %0.2f", calculo1(a, b, c));
	printf("\n Valor do retorno do calculo 2 = %0.2f", calculo2(a, b, c));
}
