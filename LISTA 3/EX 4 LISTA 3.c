#include<stdio.h>

int main() {
    float sal, parcela, cal;

    printf("Digite seu salario: ");
    scanf("%f", &sal);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &parcela);

    if (parcela > sal*0.20) {
        printf("Emprestimo nao concedido");
    } else {
        printf ("Emprestimo concedido");
    }
}