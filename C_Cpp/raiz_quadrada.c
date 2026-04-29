#include <stdio.h>
#include <cmath>

main() {
	int num;
	float raiz = 0;
	
	printf("\n Digite um numero: ");
	scanf("%d", & num);
	
	if(num > 0)
	{
		raiz = sqrt(num);
		printf("\n Raiz quadrada de %d = %.2f", num, raiz);
	}
}
