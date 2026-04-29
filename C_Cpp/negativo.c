#include <stdio.h>

main(){
	int vetor[6] = {1,0,5,-2,-5,7}, i;
	int somaPosi=0, quantNeg=0;
	
	for(i=0;i<=5;i++){
		printf("%d", vetor[i]);
		if(vetor[i] >= 0)
			somaPosi += vetor[i];
		else
			quantNeg++;
	}
	printf("\n Soma dos valores positivos = %d", somaPosi);
	printf("\n Quantidade dos negativos = %d", quantNeg);
		
}
	
