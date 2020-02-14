#include <stdlib.h>
#include <stdio.h>

int main(){

	int num;

	printf("Digite um numero:\n");
	scanf("%i", &num);

	if(num % 2 == 0){
		printf("O numero %i eh par.", num);
	}
	else{
		printf("O numero %i eh impar.", num);
	}

    return 0;
}