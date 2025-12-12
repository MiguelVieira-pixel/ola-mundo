#include <stdio.h>
#include <stdlib.h>

main(){
	float nota[10], media=0;
	int soma=0, i, maiorMedia=0;
	
	
	for(i=0; i<=9; i++){
		printf("\n Digite a nota do %d.0 aluno: ", i+1);
		scanf("%f", &nota[i]);
		soma += nota[i];
	}
	system("cls");
	
	media = soma / i;
	printf("\n A media da sala = %.2f", media);
	
	for(i=0; i<=9; i++){
		if(nota[i] > media)
			maiorMedia++;
	}
	
	printf("\n A quantidade de notas maiores que a media = %d", maiorMedia);
}
