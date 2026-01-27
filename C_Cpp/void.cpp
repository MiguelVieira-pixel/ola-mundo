#include <stdio.h>

void mens(){
	printf("\n Estou na funcao.\n");
}

void traco(int x){
	int z;
	
	for(z=1; z<=x; z++)
		printf("-");
//	printf("\n");
}

main() {
	int x=20;
	
	traco(x);
	mens();
	traco(x);
}
