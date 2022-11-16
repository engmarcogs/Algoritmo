#include<stdio.h>
    int main(){
        int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,media;

        printf("Digite 10 valores inteiros : ");
        scanf("%d%d%d%d%d%d%d%d%d%d",&v1,&v2,&v3,&v4,&v5,&v6,&v7,&v8,&v9,&v10);

        media = (v1+v2+v3+v4+v5+v6+v7+v8+v9+v10)/10;

        printf("a media entre os valores e : %d",media);
    }