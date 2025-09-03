#include <stdio.h>

main() {
	float nota1, nota2, nota3, media = 0;
	
	printf("\n Digite a primeira nota: ");
	scanf("%f", & nota1);
	printf("\n Digite a seguda nota: ");
	scanf("%f", & nota2);
	printf("\n Digite a terceira nota: ");
	scanf("%f", & nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("\n A sua media e = %.2f", media);
	
	if(media >= 5)
	{
		printf("\n Voce passou");
		printf("\n PARABENS!!!");
	}

}
