#include <stdio.h>

main() {
	float notas, mediaAluno, somaNotas = 0, somaNotaGeral = 0, mediaAlunoGeral = 0;
	int x = 0, z = 0, cont = 0;
	
	for(z=1;z<=5;z++){
		for(x=1;x<=3;x++){
			printf("\n Digite a %d.0 nota do %d.0 aluno: ", x, z);
			scanf("%f", &notas);
			somaNotas += notas;
			cont++;
		}
		//	media de cada aluno
	mediaAluno = somaNotas / cont;
	printf("\n Media do %d.0 aluno: %.2f", z, mediaAluno);
	if(mediaAluno <= 5)
		printf("\n REPROVADO");
	else if(mediaAluno >= 7)
		printf("\n APROVADO");
	else
		printf("\n EXAME");
	
//	somaNotaGeral
	somaNotaGeral += mediaAluno;
		
//		zerando variáveis
	cont = 0;
	somaNotas = 0;
	}
	mediaAlunoGeral = somaNotaGeral / 5;
	printf("\n A media geral = %.2f", mediaAlunoGeral);

}
