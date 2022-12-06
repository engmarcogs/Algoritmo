#include<stdio.h>
#include<string.h>

int main () {
    char cor[7];
    char branco[] = "branco", verde[] = "verde", amarelo[] = "amarelo";

    printf("Digite uma cor Obs:. serao aceitos apenas (branco) (verde) ou (amarelo)\n");
    printf("Digite uma cor: ");
    scanf("%s", cor);

    if (strcmp(cor,branco) == 0){
        printf("Sao iguais");
        return 0;
    }
    else if (strcmp(cor,verde) == 0) {
        printf("Sao iguais");
        return 0;
    }
    else if (strcmp(cor,amarelo) == 0) {
        printf("Sao iguais");
        return 0;
    }
    else {
        printf("Nao sao iguais");
        return 0;
    }
}