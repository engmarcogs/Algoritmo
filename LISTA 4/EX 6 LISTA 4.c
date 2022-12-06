#include<stdio.h>
#include<windows.h>

int main() {
    int contador = 11;
    
    while (contador > 0)
    {   printf("Contagem regressiva!\n");
        contador --;
        
        printf(" %d ", contador);
        sleep(1);
        system("cls");

    }
    
    printf("FIM");
}