#include <stdio.h>
# define multa 4
#define regulamento 50

main() {
	float pesoPescado, pesoExcedente, pagaMulta = 0;
	
	printf("\n Digite o peso de peixes pescados[Kg]: ");
	scanf("%f", & pesoPescado);
	printf("\n %.2f Kg pescado.", pesoPescado);
	if(pesoPescado > regulamento)
		{
		//peso excedente
		pesoExcedente = pesoPescado - regulamento;
		printf("\n Peso excedente = %.2f", pesoExcedente);
		
		//multa
		pagaMulta = multa * pesoExcedente;
		printf("\n Valor da multa = %.2f", pagaMulta);
		}
}
