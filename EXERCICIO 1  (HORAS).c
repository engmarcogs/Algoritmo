#include<stdio.h>
#include<stdlib.h>

    int main (){

        //variável horas,minutos, segundos.

    float horas, minutos, segundos;

    printf("Digite a quantidade de horas:\n");
    scanf("%f",&horas);

        //Cálculo 
     minutos = ( 60 * horas );        
        
        // Saida de dados.
        printf("quantidade de minutos e:\n %1.f minutos\n", minutos);
     segundos = ( 60 * minutos);
       printf("quantidade de segundos e:\n %1.f segundos\n:", segundos);
    }