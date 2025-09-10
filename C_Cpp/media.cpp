#include <stdio.h>

main() {
	float nota1, nota2, nota3, media = 0;
	
//	entrada de dados
	printf("\n Digite a primeira nota: ");
	scanf("%f", & nota1);
	printf("\n Digite a segunda nota: ");
	scanf("%f", & nota2);
	printf("\n Digite a terceira nota: ");
	scanf("%f", & nota3);
	media = (nota1 + nota2 + nota3) / 3;
	
//	definindo qual o conceito do aluno
	if(media <= 10 && media > 8)
		printf("\n Media final = %.2f \n Conceito = A", media);
	else if(media <= 8 && media > 7)
		printf("\n Media final = %.2f \n Conceito = B", media);
	else if(media <= 7 && media > 6)
		printf("\n Media final = %.2f \n Conceito = C", media);
	else if(media <= 6 && media > 5)
		printf("\n Media final = %.2f \n Conceito = D", media);
	else
		printf("\n Media final = %.2f \n Conceito = E", media);
}
