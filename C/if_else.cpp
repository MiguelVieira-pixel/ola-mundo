#include <stdio.h>

main() {
	char sexo;
	
	printf("Digite o sexo da pessoa F\\M: ");
	fflush(stdin);
	sexo = getchar();
	
	//verifica��o do sexo
	if(sexo == 'F' || sexo == 'f')
		printf("\n\n Pessoa do sexo Feminino");
	else
		printf("\n\n Pessoa do sexo Masculino");

}
