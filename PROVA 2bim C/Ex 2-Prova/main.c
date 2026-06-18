#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 0;
	int b = 0;
	
	printf("Digite um número: "); 
	scanf("%i", &a);
	
	printf("Digite outro número: ");
	scanf("%i", &b);
	
	printf("Resultado: %.0f", pow(a, b));
	
	return 0;
}
