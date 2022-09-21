#include<stdio.h>   
#include<stdlib.h>
#include<math.h>

int main (){

//CÃ¡lclo de raio de cÃ­rculo

    float raio, area;

    printf("Digiite o raio do circulo\n");
    scanf("%f",&raio);

//cÃ¡lculo 

area = (pow(raio,2) * 3.14 );

printf("Sua area e: \n %0.1f metros quadrados\n", area);
}