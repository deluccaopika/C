#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1 = 0;
	
	printf("Coloque um número: ");
	scanf("%i", &n1);
	
	if(n1 > 0){
		printf("Seu número é positivo!");
	}
	
	else if(n1 < 0){
		printf("Seu número é negativo!");
	}
	
	return 0;
}
