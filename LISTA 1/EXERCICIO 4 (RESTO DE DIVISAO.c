#include<stdio.h>   
#include<stdlib.h>


    int main (){

        int valor1, valor2, divisao, resto;

        //ENTRADA DE DADOS!!!

        printf("DIGITE O PRIMEIRO VALOR:\n ",valor1);
        scanf("%i", &valor1);

        printf("DIGITE O SEGUNDO VALOR:\n ",valor2);
        scanf("%i", &valor2);

        //PROCESSAMENTO DE DADOS!!!
        
            divisao = (valor1 / valor2);
                printf("RESULTADO DA DIVISAO E: \n %i\n """, divisao);
            resto = (valor1%valor2);       
                printf("O RESTO DA DIVISAO E: \n %i\n""",resto);
    }