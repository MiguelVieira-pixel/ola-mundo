#include<stdio.h>
#include<stdlib.h>
#include "D:\projeto\ola-mundo\C_Cpp\media.h"
main() {
	float num_1, num_2;
	printf("\n Digite o primeiro numero: ");
	scanf("%f", &num_1);
	printf("\n Digite o segundo numero: ");
	scanf("%f", &num_2);
	printf("\n A media destes numeros e -> %0.2f", media(num_1, num_2));
	system("pause>null");
}
