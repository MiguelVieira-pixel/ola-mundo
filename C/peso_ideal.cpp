#include <stdio.h>
#include <conio.h>

main() {
	float altura, pesoIdeal = 0;
	char sexo;
	
//	entrada de dados
	printf("\n Digite a altura em [m]: ");
	scanf("%f", & altura);
	printf("\n Digite o sexo[M\\F]: ");
	fflush(stdin);
	sexo = getche();
	
//	verificar sexo
	if(sexo == 'M' || sexo == 'm'){
		pesoIdeal = (72.7 * altura) - 58;
		printf("\n O seu peso ideal = %.2f", pesoIdeal);
	}
	else if(sexo == 'M' || sexo == 'm'){
		pesoIdeal = (72.7 * altura) - 58;
		printf("\n O seu peso ideal = %.2f", pesoIdeal);
	}
	else
		printf("\n Sexo errado.");
}
