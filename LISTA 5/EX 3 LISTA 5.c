#include<stdio.h>
#include<string.h>

int main () {
    char nome[50], email[30], endereco[35], backupnome[50], backupemail[30], backupendereco[35];

    printf("Digite seu nome completo: ");
    gets(nome);
    system("cls");
    printf("Digite seu email: ");
    gets(email);
    system("cls");
    printf("Digite seu endereco: ");
    gets(endereco);
    system("cls");

    strcpy(backupnome, nome);
    strcpy(backupemail, email);
    strcpy(backupendereco, endereco);

    printf("Dados que foram salvos em backup\n");
    printf("Nome: %s\n", backupnome);
    printf("Email: %s\n", backupemail);
    printf("Endereco: %s\n", backupendereco);
}

