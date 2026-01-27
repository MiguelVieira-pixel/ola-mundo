#include <stdio.h>

main(){
	int vetor[5], i, z, maior=0;
	
	for(i=0; i<=4; i++){
		printf("\n Digite o %d.0 valor inteiro: ", i+1);
		scanf("%d", &vetor[i]);
		if(vetor[i] > maior){
			maior = vetor[i];
			z = i;
		}
	}
	printf("\n O maior valor = %d", maior);
	printf("\n A posicao(indice) do maior valor = %d", z);
}
