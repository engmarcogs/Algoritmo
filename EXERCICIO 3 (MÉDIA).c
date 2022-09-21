#include<stdio.h>   
#include<stdlib.h>


    int main (){

        int valor1, valor2, valor3, media;

        //ENTRADA DE DADOS!!!

        printf("DIGITE O PRIMEIRO VALOR:\n ",valor1);
        scanf("%i", &valor1);

        printf("DIGITE O SEGUNDO VALOR:\n ",valor2);
        scanf("%i", &valor2);

        printf("DIGITE O TERCEIRO VALOR:\n ",valor3);
        scanf("%i", &valor3);

        //PROCESSAMENTO DE DADOS!!!
        
        media = (valor1 + valor2 + valor3) / 3;
        
                printf("Sua media foi:\n %i ", media);
    }