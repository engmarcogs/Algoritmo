#include<stdio.h>

int main () {
    char nome[15];
    float sal, result, vendas;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu salario fixo: ");
    scanf("%f", &sal);
    printf("Total de vendas realizadas no mes (R$): ");
    scanf("%f", &vendas);

    result = (vendas * 0.15) + sal;

    printf("%s voce recebera R$ %.2f", nome, result);
}