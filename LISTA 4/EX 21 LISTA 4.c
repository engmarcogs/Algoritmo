#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main() {
    float porcentagemFeminina;
    int idade, maiorIdade, contPorcentagem, cont;
    char sexo[40], corOlhos[40], corCabelos[40];

    contPorcentagem = 0;
    maiorIdade = 0;
    cont = 0;

    do {
        cont++;
        printf("Informe o sexo (M)masculino (F) feminino:\n");
        scanf("%s", &sexo);
        printf("Informe a cor dos olhos (a)azul (v)verde (c)castanho (p)preto:\n");
        scanf("%s", &corOlhos);
        printf("Informe a cor dos cabelos (l)loiro (c)castanho (p)preto (r)rosa:\n");
        scanf("%s", &corCabelos);
        printf("Informe a idade entre 10 e 100 anos:\n");
        scanf("%d", &idade);
        if ((strcmp (sexo,"feminino") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp (corOlhos,"verdes") == 0) && (strcmp (corCabelos,"louros") == 0)) {
            contPorcentagem++;
        }
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
    }
    while (idade != -1);
    printf("Maior idade: %d\n", maiorIdade);
    porcentagemFeminina = (100 * contPorcentagem)/cont;
    printf("Porcentagem feminina com olhos verdes, cabelos louros que estao entre 18 e 35 anos: %.2f\n", porcentagemFeminina);
}