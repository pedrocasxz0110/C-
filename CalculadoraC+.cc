/*
  Author: Pedro Egydio
  Data: 17/05/24 19:51
  Description: Calculadora
*/
#include <stdio.h>
#include <math.h>

// Funções para operações
void soma() {
    float num1, num2, total;
    while (1) {
        printf("\nOPERACAO: SOMA\nOBS.:Digite -0 para sair\n");
        printf("Digite a primeira parcela: ");
        scanf("%f", &num1);
        if (num1 == -0) break;
        printf("Digite a segunda parcela: ");
        scanf("%f", &num2);
        total = num1 + num2;
        printf("RESULTADO: %.2f + %.2f = %.2f\n", num1, num2, total);
    }
}

void subtracao() {
    float num1, num2, total;
    while (1) {
        printf("\nOPERACAO: SUBTRACAO\nOBS.:Digite -0 para sair\n");
        printf("Digite a primeira parcela: ");
        scanf("%f", &num1);
        if (num1 == -0) break;
        printf("Digite a segunda parcela: ");
        scanf("%f", &num2);
        total = num1 - num2;
        printf("RESULTADO: %.2f - %.2f = %.2f\n", num1, num2, total);
    }
}

void multiplicacao() {
    float num1, num2, total;
    while (1) {
        printf("\nOPERACAO: MULTIPLICACAO\nOBS.:Digite -0 para sair\n");
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        if (num1 == -0) break;
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        total = num1 * num2;
        printf("RESULTADO: %.2f x %.2f = %.2f\n", num1, num2, total);
    }
}

void divisao() {
    float num1, num2, total;
    while (1) {
        printf("\nOPERACAO: DIVISAO\nOBS.:Digite -0 para sair\n");
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        if (num1 == -0) break;
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        if (num2 != 0) {
            total = num1 / num2;
            printf("RESULTADO: %.2f : %.2f = %.2f\n", num1, num2, total);
        } else {
            printf("Nao existe divisao por zero!\n");
        }
    }
}

void potenciacao() {
    float num1, n, total;
    while (1) {
        printf("\nOPERACAO: POTENCIACAO\nOBS.:Digite -0 para sair\n");
        printf("Digite o numero: ");
        scanf("%f", &num1);
        if (num1 == -0) break;
        printf("Digite o indice: ");
        scanf("%f", &n);
        total = pow(num1, n);
        printf("RESULTADO: %.2f elevado a %.2f = %.2f\n", num1, n, total);
    }
}

void radiciacao() {
    float num1, n, total;
    while (1) {
        printf("\nOPERACAO: RADICIACAO\nOBS.:Digite -0 para sair\n");
        printf("Digite um numero: ");
        scanf("%f", &num1);
        if (num1 == -0) break;
        if (num1 >= 0) {
            printf("Digite o indice: ");
            scanf("%f", &n);
            if (n > 0) {
                total = pow(num1, 1/n);
                printf("RESULTADO: A raiz %.2f de %.2f vale %.2f\n", n, num1, total);
            } else {
                printf("Nao existe raiz com indice negativo!\n");
            }
        } else {
            printf("Nao existe raiz de numero negativo.\n");
        }
    }
}

void porcentagem() {
    float num1, n, total;
    while (1) {
        printf("\nOPERACAO: PORCENTAGEM\nOBS.:Digite -0 para sair\n");
        printf("Digite um numero: ");
        scanf("%f", &num1);
        if (num1 == -0) break;
        printf("Digite a porcentagem: ");
        scanf("%f", &n);
        if (n >= 0) {
            total = (num1 * n) / 100;
            printf("RESULTADO: %.2f por cento de %.2f vale %.2f\n", n, num1, total);
        } else {
            printf("Nao existe porcentagem negativa!\n");
        }
    }
}

int main() {
    char opcao;
    do {
        printf("\n>>>>CALCULADORA<<<<\nAutor: Pedro Egydio\nEstudante do curso técnico de Análise e Desenvolvimento de Sistemas\n");
        printf("\n\tMENU DE OPCOES\nDigite + para adicao\nDigite - para subtracao\nDigite x para multiplicacao\n");
        printf("Digite / para divisao\nDigite p para potenciacao\nDigite r para radiciacao\nDigite c para porcentagem\nDigite s para sair\n\n>>> ");
        scanf(" %c", &opcao);
        fflush(stdin); // Limpa o buffer do teclado
        switch (opcao) {
            case '+': soma(); break;
            case '-': subtracao(); break;
            case 'x':
            case 'X': multiplicacao(); break;
            case '/': divisao(); break;
            case 'p':
            case 'P': potenciacao(); break;
            case 'r':
            case 'R': radiciacao(); break;
            case 'c':
            case 'C': porcentagem(); break;
            case 's':
            case 'S': printf("Saindo da calculadora!\n"); break;
            default: printf("Opcao Invalida!\n"); break;
        }
    } while (opcao != 's' && opcao != 'S');
    return 0;
}
