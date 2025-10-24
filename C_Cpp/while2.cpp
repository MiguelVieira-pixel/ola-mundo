#include <stdio.h>
#include <stdlib.h>
main() {
	int num, tabuada = 0, x = 0;
	char resp = 's';
	
	while(resp=='s' || resp=='S'){
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &num);
		for(x=1;x<=10;x++){
			tabuada = x * num;
			printf("\n %d x %d = %d", num, x, tabuada);
		}
		printf("\n Deseja fazer outra tabuada[S/N]:");
		fflush(stdin);
		resp = getchar();
		system("cls");
	}
	system("pause>null");
}
