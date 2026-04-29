#include <stdio.h>

float media(float a, float b){
	float med;
	med = (a + b)/ 2.0;
	return(med);
}

void ler_dados(float &num1, float &num2){
	printf("\n Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("\n Digite o segundo numero: ");
	scanf("%f", &num2);
}

main() {
	float num1, num2;
	
	ler_dados(num1, num2);
	printf("\n A media destes numeros e -> %.2f", media(num1, num2));
}
