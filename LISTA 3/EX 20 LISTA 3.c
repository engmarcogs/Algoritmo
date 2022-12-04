#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(int argc, char** argv)
{
 float a, b, c, x1, x2, delta;
 
 printf("Digite o primeiro valor: ");
 scanf("%f", &a);
 system("cls");
 printf("Digite o segundo valor: ");
 scanf("%f", &b);
 system("cls");
 printf("Digite o terceiro valor : ");
 scanf("%f", &c);
 system("cls");
 

 delta = b*b - 4*a*c;
 x1 = (-b + sqrt(delta)) / (2*a);
 x2 = (-b - sqrt(delta)) / (2*a);
 

 if(delta < 0) {
    printf("Não existe raiz\n");
 } 
    else if (delta = 0) {
        printf("Raiz única");
    }
        else {
            printf("O valor de x1: %.2fn", x1);
            printf("O valor de x2: %.2fn", x2);
        }
}