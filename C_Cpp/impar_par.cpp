#include <stdio.h>

main(){
	int valores[5], par=0, impar=0, i;
	
	for(i=0;i<=4;i++){
		printf("\n Digite o %d.0 valor inteiro: ", i+1);
		scanf("%d", &valores[i]);
		if(valores[i]%2 == 0)
			par++;
		else
			impar++;
	}
	printf("\n Pares = %d", par);
	printf("\n Impares = %d", impar);
}
