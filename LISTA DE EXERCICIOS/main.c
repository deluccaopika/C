#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1 = 0;
	
	printf("Escreva um número: ");
	scanf("%i", &n1);
	
	if(n1 %2 == 0){
		printf("Seu número é par!");
	}
	
	else{
		printf("Seu número é ímpar");
	}
	
	return 0;
}
