#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Escreva um programa em C que utilize o laço for para imprimir todos os números pares entre 1 e 50
//(inclusive).

	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i = 2; i <= 50; i += 2) {
		printf("%i \n", i);
	}

	return 0;
}
