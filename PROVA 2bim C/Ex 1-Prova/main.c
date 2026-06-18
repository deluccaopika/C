#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1 = 0;
	int n2 = 0;
	
	printf("Digite um número: ");
	scanf("%i", &n1);
	
	printf("Digite outro número: ");
	scanf("%i", &n2);
	
	int soma = (n1 + n2);
	
	printf("O resultado da soma é: %i", soma);
	return 0;
}
