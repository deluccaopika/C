#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1 = 0;
	int n2 = 0;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	
	if(n1 ==  n2){
		printf("Os números são iguais!");
	}
	
	else{
		printf("Eles são diferentes!");
	}
	
	return 0;
}
