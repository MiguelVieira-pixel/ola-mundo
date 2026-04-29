#include <stdio.h>

main() {
	float preco, total, media = 0;
	int x;
	
	for(x=0; x<=4; x++){
		printf("\n Digite o preco do produto: ");
		scanf("%f", &preco);
		total = total + preco;
	}
	media = total / x;
	printf("\n O total foi de R$%0.2f", total);
	printf("\n A media foi de R$%0.2f", media);
}
