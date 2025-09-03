#include <stdio.h>
#define ano 2025
main() {
	char sexo, civil;
	int dataCasamento, tempoCasado = 0;
	
	printf("\n Digite o seu sexo[F\\M]: ");
	fflush(stdin);
	sexo = getchar();
	printf("\n Digite o seu estado civil[S\\C]");
	fflush(stdin);
	civil = getchar();
	//data de casamento se for casado
	if(civil =='c' || civil =='C')
	{
		printf("\n Digite a data de casamento:");
		scanf("%d", & dataCasamento);
	}
	if((sexo == 'f' || sexo == 'F') && (civil == 'c' || civil == 'C'))
	{
		tempoCasado = ano - dataCasamento;
		printf("\n O seu tempo casado = %d", tempoCasado);
	}
}
