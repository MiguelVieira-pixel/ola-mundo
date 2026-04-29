#include <stdio.h>

void troca(int &a, int &b){
	a = b;
}

main (){
	int a=2, b=3;
	
	troca(a,b);
	printf("\n Depois de chamar a funcao:\na=%d\nb=%d\n", a, b);
}
