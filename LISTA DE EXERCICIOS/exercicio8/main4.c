#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 100) {
        printf("O numero esta entre 10 e 100.");
    } else {
        printf("O numero nao esta entre 10 e 100.");
    }
	return 0;
}
