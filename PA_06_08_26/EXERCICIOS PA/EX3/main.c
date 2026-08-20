#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Escreva um programa em C que utilize o laço while para ler números inteiros digitados pelo usuário, um
por vez, parando a leitura quando o usuário digitar o número 0. Ao final, exiba quantos números foram
lidos (sem contar o 0).*/

	int n;
    int contador = 0;

    printf("Digite numeros inteiros (0 para parar):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
    		break;
        }

        contador++;
    }

    printf("Quantidade de numeros lidos: %d\n", contador);

	return 0;
}
