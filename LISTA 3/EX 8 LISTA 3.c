#include<stdio.h>
#include<string.h>

int main() {
    float valProduto, valFinal;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valProduto);
    printf("Digite seu estado: ");
    scanf("%s", &estado);

    if (estado == 'MG') {
        valFinal = valProduto + (valProduto*0.07);
        printf("O valor final do produto e: R$%f", valFinal);
    } 
    else if (estado == 'SP') {
        valFinal = valProduto + (valProduto*0.12);
        printf("O valor final do produto e: R$%f", valFinal);
    }
    else if (estado == 'RJ') {
        valFinal = valProduto + (valProduto*0.15);
        printf("O valor final do produto e: R$%f", valFinal);
    }
    else if (estado == 'MS') {
        valFinal = valProduto + (valProduto*0.08);
        printf("O valor final do produto e: R$%f", valFinal);
    }
    else {
        printf("Estado nao encontrado no banco de dados");
    }
}