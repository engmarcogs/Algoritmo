#include<stdio.h>

int main () {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    system("cls");
    printf("Todos os numeros naturais de 0 a %d sao:\n", num);
    for(int i = num; i >= 0; i--) {
        printf(" %d ", i);
    }
}