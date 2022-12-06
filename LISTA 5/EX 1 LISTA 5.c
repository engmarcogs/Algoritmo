#include<stdio.h>
#include<string.h>
    int main (){
        char nome[50];

        printf("Digite o nome completo: ");
        gets(nome);
        printf("Quantidade de caracteres digitado e: %zu", strlen(nome));

    }
