#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao;
    float num1, num2, resultado;

    do {
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%f", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            if (opcao == 1) {
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
            }
        } 
        

    } while (opcao != 0);

    printf("Programa encerrado.\n");
	
	
	
	return 0;
}
