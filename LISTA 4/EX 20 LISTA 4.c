#include <stdio.h>
#include<math.h>
int main(){
    int iniciar, repetir, maca, abacaxi, pera;
    float valFinal;

    printf("1 - ABACAXI R$ 5,00 a unidade\n");
    printf("2 - MAcA  R$ 1,00 a unidade\n");
    printf("3 - PERA  R$ 4,00 a unidade\n");
    printf("\nDeseja iniciar compra? (1)sim (2)nao : ");
    scanf("%d", &iniciar);


    while( iniciar == 1){
    printf("Quantas macas deseja compras?");
    scanf("%d", &maca);
    printf("Quantas peras deseja compras?");
    scanf("%d", &pera);
    printf("Quantos abacaxi deseja compras?");
    scanf("%d", &abacaxi);
    
    printf("\nDeseja voltar ao menu inicial ? (1)sim (2)nao : ");
    scanf("%d", &repetir);

    if(repetir==1){

     printf("Quantas macas deseja compras?");
    scanf("%d", &maca);
    printf("Quantas peras deseja compras?");
    scanf("%d", &pera);
    printf("Quantos abacaxi deseja compras?");
    scanf("%d", &abacaxi);
    
    printf("Deseja repetir? (1)sim (2)nao");
    scanf("%d", &repetir);}
    
    if(repetir==2){
        valFinal= 1*maca + 5*abacaxi+ 4*pera;
        printf("o valor final da compra e : R$ %.2f\n", valFinal);break;}
    
    } 

}