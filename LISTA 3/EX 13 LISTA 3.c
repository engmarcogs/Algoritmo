#include <stdio.h>
#include<math.h>

int main (){
int quadrante;
float x , y;

printf("Digite dois numeros:");
scanf("%f%f", &x, &y);

printf("Assinale alguma alternativa: \n Se x for igual a 0.0 e y for igual a 0.0 : 1\n Se x for maior que 0 e y for maior que 0 : 2  \n Se x for maior que 0 e y for maior 0 : 3 \n Se x for maior que 0 e y for maior que 0 :4 \n Se x for maior que 0 e y for menor que 0 : 5\n");
scanf("%d", &quadrante);

 switch (quadrante)
 {

case 1 :printf ("Origem"); break;
case 2 :printf("Q1"); break;
case 3 :printf("Q2"); break;
case 4 :printf("Q3"); break;
case 5 :printf("Q4");break;
}
}