#include <stdio.h>

main() {
	float saldo, CPMF;
	
	printf("\n Digite saldo: ");
	scanf("%f", & saldo);
	
	if(saldo >= 1000 && saldo < 2530)
	{
		CPMF = (saldo * 0.38) / 100;
		printf("\n Valor a ser pago CPMF = %.2f", CPMF);
	}
}
