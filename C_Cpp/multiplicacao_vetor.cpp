#include <stdio.h>
#include <stdlib.h>
main(){
	int vetorA[5], vetorB[5], resultante[5], i;
	
	for(i=0; i<=4; i++)	{
		printf("\n Digite o %d.0 valor do vetor A: ", i+1);
		scanf("%d", &vetorA[i]);
		printf("\n Digite o %d.0 valor do vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
		resultante[i] = vetorA[i] * vetorB[i];		
	}
	for(i=0; i<=4; i++)
		printf("\n %d", resultante[i]);
}
