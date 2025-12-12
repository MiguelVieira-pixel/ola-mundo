#include <stdio.h>
#include <stdlib.h>

main(){
	int idade[5], i, soma;
	float media;
	
//	carrega o vetor
	for(i=0; i<=4; i++){
		printf("\n Digite %d.a idade: ",i+1);
		scanf("%d", &idade[i]);
	}
//	mostra os elementos do vetor
	system("cls");
	for(i=0; i<=4; i++){
	printf("\n %d",idade[i]);
	soma += idade[i];
	}
	media = soma / i;
	printf("\n media = %.2f", media);
	system("pause>null");
}
