#include <stdio.h>
#include <string.h>

main(){
	char nome[4][10], auxNome[15];
	float altura[4], alturaMaior=0;
	int i;
	
	for(i=0; i<=3; i++){
		printf("\n Digite o nome do %d.0 atleta: ", i+1);
		fflush(stdin);
		gets(nome[i]);
		printf("\n Digite a altura do %d.0 atleta: ", i+1);
		scanf("%s", &altura[i] );
		
		if(altura[i] > alturaMaior){
			alturaMaior = altura[i];
			strcpy(auxNome, nome[i]);
		}
	}
	printf("\n O nome do maior atleta = %s", auxNome);
}
