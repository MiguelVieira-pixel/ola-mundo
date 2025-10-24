#include <stdio.h>

main() {
	int i, num, maiorNum = 0;
	
	for(i=0; i<=2;i++){
		printf("\n Digite um numero");
		scanf("%d", &num);
		
		if(num > maiorNum)
			maiorNum = num;
	}
}
