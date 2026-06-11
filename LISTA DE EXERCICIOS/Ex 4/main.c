#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	
	printf("Informe a primeira nota: ");
	scanf("%i", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%i", &n2);
	
	printf("Informe a terceira nota: ");
	scanf("%i", &n3);
	
	float nota = (n1 + n2 + n3)/ 3;
	
	printf("A média é %f", nota);
	return 0;
}
