#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float preco, total;
    int quantidade;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    total = preco * quantidade;

    printf("Valor total da compra: R$ %.2f\n", total);

	return 0;
}
