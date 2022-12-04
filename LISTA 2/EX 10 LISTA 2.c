#include<stdio.h>
#include<math.h>

int main () {
    
    float x1, x2, y1, y2, distancia;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    system("cls");
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    system("cls");
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    system("cls");
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);
    system("cls");

    distancia = sqrt(((pow(x2, 2)) - (pow(x1, 2))) + ((pow(y2, 2)) - (pow(y1, 2))));

    printf("A distancia entre X e Y e de: %.4f", distancia);  
}