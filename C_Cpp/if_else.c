#include <stdio.h>

main() {
<<<<<<< HEAD:C/if_else.cpp
	char sexo;
	
	printf("Digite o sexo da pessoa F\\M: ");
	fflush(stdin);
	sexo = getchar();
	
	//verificação do sexo
	if(sexo == 'F' || sexo == 'f')
		printf("\n\n Pessoa do sexo Feminino");
	else
		printf("\n\n Pessoa do sexo Masculino");

}
=======
    int num;

    printf("Digite um numero: ");
    scanf("%d", & num);

    //se numero maior que 10 ou menor que 10
    if(num > 10)
        printf("\n Numero e maior que 10");
    else if(num < 10)
        printf("\n Numero e menor que 10");
    else
        printf("\n Numero e igual a 10");
}
>>>>>>> a78beb504641731a80afb8c51334865ac378e62e:C_Cpp/if_else.cpp
