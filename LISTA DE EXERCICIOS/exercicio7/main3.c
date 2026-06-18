#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2f", resultado);
    }
    else if (operacao == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2f", resultado);
    }
    else if (operacao == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2f", resultado);
    }
    else if (operacao == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f", resultado);
        } else {
            printf("Erro: divisao por zero!");
        }
    }
    else {
        printf("Operacao invalida!");
    }
	return 0;
}
