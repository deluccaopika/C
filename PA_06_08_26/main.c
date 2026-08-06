#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int contador = 0;
	char caracter[2] = "S";
	int numeross = 0;
	
	printf("%s", caracter);
	while(strcmp(caracter, "S") == 0) {
		printf("Digite um valor para somar: ");
		int valorAtual;
		scanf("%i", &valorAtual);
		 while (getchar() != '\n');
		numeross += valorAtual;
		printf("Valor da soma: %i", numeross);
		printf("Deseja continuar somando? [S] ou [N]");
		fgets(caracter, sizeof(caracter), stdin);
	}
	
	return 0;
}
