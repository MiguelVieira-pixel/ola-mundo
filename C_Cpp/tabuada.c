#include <stdio.h>

main() {
	int x, num, tabuada = 0;
	
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num);
	for(x=1;x<=10;x++){
		tabuada = x * num;
		printf("\n %d x %d = %d", num, x, tabuada);
	}
}
