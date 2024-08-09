#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5];
    float soma = 0.0, media = 0.0;

    for(int i = 0; i < 5; i ++){
        scanf("%d",&vetor[i]);
        soma += vetor[i];
    }
    media = soma / 5;

    for(int i = 0; i < 5; i++){
        printf("Lido: %d\n",vetor[i]);
    }
    printf("A media dos valores eh: %.2f",media);
    return 0;
}