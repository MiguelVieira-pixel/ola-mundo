#include <stdio.h>
#include <conio.h>
#define precoGasolina 4.30
#define precoAlcool 3.34

main() {
	float litros, valorTotal = 0;	
	char tipoCombustivel;
	
	printf("\n Digite o numero de litros vendidos: ");
	scanf("%f", & litros);
	printf("\n Digite o tipo[A-Alcool, G-gasolina]: ");
	fflush(stdin);
	tipoCombustivel=getche();
	
//	valor do alcool
	if(tipoCombustivel == 'A' || tipoCombustivel == 'a'){
		if(litros <= 20){
//			desconto de 3%
			valorTotal = (precoAlcool * litros) * 0.97;  
			printf("\n Valor a ser pago = %.2f", valorTotal);
		}
		else{
//			desconto de 4%
			valorTotal = (precoAlcool * litros) * 0.96;  
			printf("\n Valor a ser pago = %.2f", valorTotal);
		}
	}
	
//	valor da gasolina
	else if(tipoCombustivel == 'G' || tipoCombustivel == 'g'){
		if(litros <= 20){
//			desconto de 4%
			valorTotal = (precoGasolina * litros) * 0.96;  
			printf("\n Valor a ser pago = %.2f", valorTotal);
		}
		else{
//			desconto de 6%
			valorTotal = (precoGasolina * litros) * 0.94;  
			printf("\n Valor a ser pago = %.2f", valorTotal);
		}
	}	
	
	else
		printf("\n Tipo invalido.");
}
