#include<stdio.h>

int main() {
    int soma = 0, contador = 0;

    while (contador < 50)
    {
        contador += 1;

        soma += contador*2;
    }
    
    printf("O resultado da soma dos 50 primeiros numeros pares e : %d", soma);
}