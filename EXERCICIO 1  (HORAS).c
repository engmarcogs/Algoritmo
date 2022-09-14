#include<stdio.h>
#include<stdlib.h>

    int main (){

        //variável horas,minutos, segundos.

    int horas, minutos, segundos;

    printf("Digite a quantidade de horas:\n");
    scanf("%d",&horas);

        //Cálculo 
     minutos = ( 60 * horas );        
        
        // Saida de dados.
        printf("quantidade de minutos e:\n %0.1d minutos\n", minutos);
     segundos = ( 60 * minutos);
       printf("quantidade de segundos e:\n %0.2d segundos\n:", segundos);
    }