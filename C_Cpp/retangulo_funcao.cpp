#include <stdio.h>
#include <math.h>

float entrada_dados(float &base, float &altura){
	printf("\n Digite a base do retangulo: ");
	scanf("%f", &base);
	printf("\n Digite a altura do retangulo: ");
	scanf("%f", &altura);
}

float perimetro(float base, float altura){
	return(2 * (base + altura));
}

float area(float base, float altura){
	return(base * altura);
}

float diagonal(float base, float altura){
	return(sqrt(pow(base,2) + pow(altura, 2)));
}

main() {
	float base, altura;
	
	entrada_dados(base, altura);
	printf("\n O perimetro = %0.2f", perimetro(base, altura));
	printf("\n A area = %0.2f", area(base, altura));
	printf("\n A diagonal = %0.2f", diagonal(base, altura));
}
