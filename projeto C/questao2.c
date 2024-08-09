#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorA[6] = {1 , 0 , 5, -2, -5, 7}, soma = 0;
    
    soma = vetorA[0] + vetorA[1] + vetorA[5];

    printf("A soma dos valores eh: %d\n",soma);
    
    vetorA[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("Posicao: [%d], valor: %d\n",i,vetorA[i]);
    }

    return 0;
}