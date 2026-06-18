#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 0;
	int b = 0;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &a);
	
	printf("Digite o segundo número: ");
	scanf("%i", &b);
	
	if (a>b){
		printf("o Primeiro número é maior!");
	}
	else if(b>a){
		printf("O Segundo número é maior!");
	}
	else {
		printf(" Os números são iguais!");
	}
	return 0;
}
