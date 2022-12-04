#include<stdio.h>

int main () {
    int num, calculo;

    printf("Digite um numero : ");
    scanf("%d", &num);

    calculo = num + 1 + (num % 2);
    printf("Os %d primeiros numero(s) naturais impares sao :\n", num);
    for (int i = 0; i < num; i++) {
        printf(" %d ", calculo);
        calculo += 2;
    } 
}