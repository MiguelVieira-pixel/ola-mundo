#include <stdio.h>
#include <stdlib.h>

main() {
	int opcao;
	char resp ='s';
	float vista, prazo, totalVista = 0, totalPrazo = 0, valorTotal = 0;
	
	while(resp=='s' || resp=='S'){
		printf("\n Digite qual opcao voce deseja");
		printf("\n 1----vista");
		printf("\n 2----prazo \n");
		scanf("%d", &opcao);
		
		if(opcao==1){
			printf("\n Digite o valor da compra:");
			scanf("%f", &vista);
			totalVista += vista;
		}
		else if(opcao==2){
			printf("\n Digite o valor da compra:");
			scanf("%f", &prazo);
			totalPrazo += prazo / 3;
		}
		else
			printf("\n OPCAO INVALIDA");
			
		printf("\n Deseja fazer outra compra[S/N]: ");
		fflush(stdin);
		resp = getchar();
		
		system("cls");
	}
//	valores totais
	valorTotal = totalVista + totalPrazo;
	printf("\n Valor total a vista = %.2f", totalVista);
	printf("\n Valor total a prazo = %.2f", totalPrazo);
	printf("\n Valor total efetuado = %.2f", valorTotal);
	
		
}
