#include <stdio.h>
#include <stdlib.h>

int main (){
    int vetorX[10], menor = 0, maior = 0;
    printf("Digite um numero: ");
    scanf("%d", &vetorX[0]);
    menor = maior = vetorX[0];

    for(int i = 1; i < 10; i++){
        scanf("%d",&vetorX[i]);
        if(vetorX[i] > maior){
            maior = vetorX[i];
        }else if(vetorX[i] < menor){
            menor = vetorX[i];
        }
    }
    printf("Maior numero eh: %d\n",maior);
    printf("Menor numero eh: %d\n",menor);
}