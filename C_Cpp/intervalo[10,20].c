#include <stdio.h>

main() {
	int num, contIntervalo = 0, x, soma = 0, contMedia = 0;
	float media = 0;	
	
	for(x=1;x<=10;x++)
	{
		printf("Digite o %d.0 numero: ", x);
		scanf("%d", num);
		
//		quantos desses valores estão no intervalo 10,20
		if((num >= 10) && (num <= 20))
			contIntervalo++;
			
//		soma dos numeros fora do intervalo 
		else{
			soma += num;
			contMedia++;
		}
	}
	
	media = soma / contMedia;
	printf("\n A quantidade de valores no intervalo = %d", contIntervalo);
	printf("\n A media dos numeros fora do intervalo = %.2f", media);
}
