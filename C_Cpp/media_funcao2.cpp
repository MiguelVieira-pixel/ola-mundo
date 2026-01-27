#include <stdio.h>

entrada_dados(float &nota1, float &nota2, float &nota3){
	printf("\n Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("\n Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("\n Digite a terceira nota: ");
	scanf("%f", &nota3);
}

float media(float nota1, float nota2, float nota3){
	return((nota1 + nota2 + nota3) / 3);
}

float conceito(float nota1, float nota2, float nota3){
	float med = 0;
	
	med = media(nota1, nota2, nota3);
	
	if(med <= 4.9){
		return(printf("\n Conceito: D"));
	}
	else if((med >= 5 && med <= 6.9)){
		return(printf("\n Conceito: C"));
	}
	else if((med >= 7 && med <= 8.9)){
		return(printf("\n Conceito: B"));
	}
	else
		return(printf("\n Conceito: A"));
}

main(){
	float nota1, nota2, nota3;
	
	entrada_dados(nota1, nota2, nota3);
	printf("Media das notas = %.2f", media(nota1, nota2, nota3));
	conceito(nota1, nota2, nota3);
}
