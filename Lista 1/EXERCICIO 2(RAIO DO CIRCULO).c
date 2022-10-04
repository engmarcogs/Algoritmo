#include<stdio.h>   
#include<math.h>
#define PI 3.14159

int main (){

//CÃ¡lclo de raio de cÃ­rculo

    float raio, area;

    printf("Digite o raio do circulo\n");
    scanf("%f",&raio);

//cÃ¡lculo 

area = (pow(raio,2) * PI );

printf("Sua area e: \n %0.1f metros quadrados\n", area);
}