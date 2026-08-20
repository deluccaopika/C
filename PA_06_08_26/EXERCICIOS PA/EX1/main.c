#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Escreva um programa em C que utilize o laço for para calcular e exibir a soma dos números inteiros de 1
//até 100
	
    int soma = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos numeros de 1 ate 100 e: %d\n", soma);
	return 0;
}
