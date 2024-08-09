#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10], somaPares = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d",&vetor[i]);
        if(vetor[i] % 2 == 0){
            somaPares ++;
        }
    }
    printf("Tem %d numeros pares no vetor.",somaPares);
    return 0;
}