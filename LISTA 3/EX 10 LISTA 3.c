#include<stdio.h>

int main() {
    int num1, num2, num3, op, cal;

    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    system("cls");

    printf("Operacoes\n");
    printf("1 - Geométrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    printf("Digite qual operacao quer fazer: ");
    scanf("%d", &op);
    system("cls");

    if (op == 1) {
        cal = num1 * num2 * num3;
        printf("Resultado da operacao Geometrica e: %d", cal);
    }
    else if (op == 2) {
        cal = ((num1+2) * (num2+3) * num3) /6;
        printf("Resultado da operacao Ponderada e: %d", cal);
    }
    else if (op == 3) {
        cal = (1/num1) + (1/num2) + (1/num3);
        printf("Resultado da operacao Harmonica e: %d",cal);
    }
    else if (op == 4) {
        cal = (num1 + num2 + num3) / 3;
        printf("Resultado da operacao Aritimetica e: %d", cal);
    }
}