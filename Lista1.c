#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero1 = 0;
	
	printf("Digite o número: ");
	scanf("%i", &numero1);
	
	
	if(numero1 > 0) {
		printf("O número 1 é positivo!");
	}
	
	else if(numero1 < 0) {
		printf("O número 2 é negativo!");
	}
	
	return 0;
}
