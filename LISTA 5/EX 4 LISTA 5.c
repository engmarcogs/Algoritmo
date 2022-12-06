#include<stdio.h>
#include<string.h>

int main () {
    char nome[45], nmeio[15], ultimo[15];

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    system("cls");
    printf("Digite seu nome do meio: ");
    scanf("%s", nmeio);
    system("cls");
    printf("Digite seu ultimo nome: ");
    scanf("%s", ultimo);
    system("cls");

    strcat(nome, nmeio);
    strcat(nome, ultimo);

    printf("Nome completo: %s", nome);
}
