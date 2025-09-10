#include <stdio.h>

main() {
	int numMaca;
	float valorTotal = 0;
	
	printf("\n Digite quantas macas voce deseja: ");
	scanf("%d", & numMaca);
	
	if(numMaca < 12){
		valorTotal = 1.3 * numMaca;
		printf("\n Valor total = %.2f", valorTotal);
	}
	else{
		printf("\n Valor total = %d", numMaca);
	}
}
