#include <stdio.h>

main() {
	float salario, desconto = 0;
	
//	entrada de dados
	printf("\n Digite o seu salario: ");
	scanf("%f", & salario);
	
//	escolhendo qual desconto usar
	if(salario <= 900)
	printf("\n Isento");
	else if(salario > 900 && salario <= 1200){
		desconto = salario * 0.1;
		printf("\n Desconto de 10%% = %.2f", desconto);
	}
	else if(salario > 1200 && salario <= 2000){
		desconto = salario * 0.15;
		printf("\n Desconto de 15%% = %.2f", desconto);
	}
	else{
		desconto = salario * 0.275;
		printf("\n Desconto de 27.5%% = %.2f", desconto);
	}
		
}
