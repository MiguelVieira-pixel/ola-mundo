#include <stdio.h>

main(){
	float preco, total = 0;
	
	for(int x = 1; x <= 5; x++){
		printf("\n Digite o preco do produto");
		scanf("%f",& preco);
		total += preco;
	}
	printf("\n O total foi de R$ %0.2f", total);
}
