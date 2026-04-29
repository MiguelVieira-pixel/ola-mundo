#include <stdio.h>

main() {
	int i, num, menorNum = 32767;
	
	for(i=0; i<=2;i++){
		printf("\n Digite um numero");
		scanf("%d", &num);
		
		if(num < menorNum)
			menorNum = num;
	}
}
