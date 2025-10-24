#include <stdio.h>
#include <stdlib.h>
main() {
	int a = 1, qtde;
	
	printf("\n Digite a quantidade vez que o laco vai repita");
	scanf("%d", &qtde);
	while(a<=qtde){
		printf("\n %d", a);
		a++;
	}
	system("pause>null");
}
