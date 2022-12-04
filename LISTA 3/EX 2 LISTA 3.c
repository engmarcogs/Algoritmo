#include<stdio.h>

int main () {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    system("cls");
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    system("cls");

    if (num1 > num2) {
        printf(" %d e maior que o %d.",num1,num2);
    }
    else if (num1 < num2) {
        printf(" %d e menor que %d.",num1,num2);
    }
    else {
        printf("%d e %d sao iguais. ",num1,num2);
    }
}