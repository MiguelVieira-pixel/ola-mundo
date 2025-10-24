#include <stdio.h>

main() {
	float tempo, tempoMedio = 0, melhorTempo = 999;
	int x, cont = 0, soma = 0, volta = 0;
	
	for(x=1;x<=5;x++){
		printf("Digite o tempo da %d.0 volta: ", x);
		scanf("%f", &tempo);
		
//		melhor tempo
		if(tempo < melhorTempo){
			melhorTempo = tempo;
			volta = x;
		}
		
//		soma da media
		soma += tempo;
		cont ++;
	}
//	media
	tempoMedio = soma / cont;
	
	printf("\n O melhor tempo = %.2f", melhorTempo);
	printf("\n A volta do melhor = %d.0 volta", volta);
	printf("\n Tempo medio das 5 voltas = %.2f", tempoMedio);
}
