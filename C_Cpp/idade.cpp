#include <stdio.h>

main() {
	int x, idade, entre15_24 = 0, maiorIdade = 0;
	
	for(x=1;x<=5;x++)	{
		printf("Digita a idade da %d.0 pessoa: ", x);
		scanf("%d", &idade);
		
//		quantidade entre 15 e 24
		if((idade<=24) && (idade>= 15)) 
			entre15_24++;
		
//		maior idade
		if(idade > maiorIdade)
			maiorIdade = idade;
	}
	printf("\n Quantidade entre 15 e 24 anos = %d", entre15_24);
	printf("\n A maior idade = %d", maiorIdade);
}
