#include<stdio.h>
#include<string.h>

int main () {
    char nome[15];
    float salario, resultado, vendas;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu salario fixo: ");
    scanf("%f", &salario);
    printf("Total de vendas realizadas no mes (R$): ");
    scanf("%f", &vendas);

    resultado = (vendas * 0.15) + salario;

    printf("%s voce recebera R$ %.2f", nome, resultado);
}