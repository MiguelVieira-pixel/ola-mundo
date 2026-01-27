#include <stdio.h>

main(){
	int i, valorentre=0;
	float mercadoria[7], total=0, media=0, maiorValor=0;
	
	for(i=0; i<=6; i++)	{
		printf("\n Digite o %d.0 valor: ", i+1);
		scanf("%f", &mercadoria[i]);
		total += mercadoria[i];
		if((mercadoria[i] >= 23.5) && (mercadoria[i] <= 350))
			valorentre++;
		if(mercadoria[i] > maiorValor)
			maiorValor = mercadoria[i];
	}
	media = total / i;
	printf("\n Valor total em estoque = %.2f", total);
	printf("\n Media de valor das mercadorias = %.2f", media);
	printf("\n Quantidade de mercadorias com valor entre R$23.50 e R$350 = %d", valorentre);
	printf("\n A mercadoria de maior valor = %.2f", maiorValor);
}
