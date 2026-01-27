#include <stdio.h>
#include <stdlib.h>

main(){
	int vetor[10], i;
	
	for(i=0; i<=9; i++)	{
		printf("\n Digite %d.0 numero: ", i+1);
		scanf("%d", &vetor[i]);
		if(vetor[i] < 0)
			vetor[i] = 0;
	}
	for(i=0; i<=9; i++)
		printf("\n %d", vetor[i]);
}
