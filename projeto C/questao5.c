#include <stdio.h>
#include <stdlib.h>

int main (){
    float vetor[10], negativos = 0.0, somaPositivos = 0.0;

    for(int i = 0; i < 10; i++){
        scanf("%f",&vetor[i]);
        if(vetor[i] < 0){
            negativos++;
        }else if(vetor[i] > 0){
            somaPositivos += vetor[i];
        }
    }
    printf("Quantidade de numeros negativos: %.1f\n",negativos);
    printf("Soma dos numeros positivos: %.1f\n",somaPositivos);

    return 0;
}