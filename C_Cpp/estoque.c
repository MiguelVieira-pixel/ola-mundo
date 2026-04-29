#include <stdio.h>

main() {
	int quantAtual, quantMax, quantMin;
	float media = 0;
	printf("\n Digite a quantidade atual em estoque: ");
	scanf("%d", & quantAtual);
	printf("\n Digite a quantidade maxima em estoque: ");
	scanf("%d", & quantMax);
	printf("\n Digite a quantidade min em estoque: ");
	scanf("%d", & quantMin);
	media = (quantMax + quantMin) / 2;
	
//	comparar se compra ou nao
	if(quantAtual >= media)
		printf("\n Nao efetuar comprar.");
	else
		printf("\n Efetuar compra.");
	
}
