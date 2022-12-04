#include<stdio.h>
#include<string.h>

int main() {
    float valProduto, valFinal;
    char estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valProduto);
    system("cls");
    printf("Agora digite seu estado: ");
    scanf("%s", &estado);
    system("cls");

    if (estado = 'MG') {
        valFinal = valProduto + (valProduto*0.07);
        printf("O valor final do produto com as taxas de Minas Gerais e : R$ %.2f", valFinal);
    } 
    else if (estado = 'SP') {
        valFinal = valProduto + (valProduto*0.12);
        printf("O valor final do produto com as taxas de Sao Paulo e: R$ %.2f", valFinal);
    }
    else if (estado = 'RJ') {
        valFinal = valProduto + (valProduto*0.15);
        printf("O valor final do produto com as taxas do Rio de Janeiro e: R$ %.2f", valFinal);
    }
    else if (estado = 'MS') {
        valFinal = valProduto + (valProduto*0.08);
        printf("O valor final do produto com as taxas de Mato Grosso do Sul e: R$ %.2f", valFinal);
    }
    else {
        printf("Estado nao encontrado no banco de dados");
    }
}