#include <stdio.h>

main() {
	int x, filhos, cont = 0, somaFilho = 0;
	float media = 0, soma = 0, salario, mediaFilhos = 0, maiorSalario = 0, percentualFuncionario = 0, menor28200 = 0;
	
	for(x=1;x<=5;x++){
		printf("Digite o salario do %d.0 funcionario: ", x);
		scanf("%f", &salario);
		printf("Digite o numero de filhos: ");
		scanf("%d", &filhos);
		
		somaFilho += filhos;
		soma = soma + salario;
		cont++;
		
		if(salario > maiorSalario)
			maiorSalario = salario;
		
		if(salario <= 28200)
			menor28200++;
	}
	//	media
	media = soma / cont;
	printf("\n A media do salario dos funcionarios = %.2f", media);
	
	mediaFilhos = somaFilho / cont;
	printf("\n A media do numero de filhos = %.2f", mediaFilhos);
	
//	maior salário
	printf("\n Maior salario = %.2f", maiorSalario);
	
//	percentual de funcionários com salário até R$28200
	percentualFuncionario = (menor28200 / cont) * 100;
	printf("\n percentual de funcionarios com salario ate R$28200,00 = %.2f%%", percentualFuncionario);
	
}
