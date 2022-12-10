#include "automato.h"
#include <stdio.h>
#include <stdlib.h>



int main(){
    int tamanho;
    int **reticulado;
    printf("Digite o tamanho do reticulado");
    scanf("%d",&tamanho);
    reticulado = alocarReticulado(tamanho);
    LeituraReticulado(reticulado,tamanho);
    
    //imprimeReticulado(reticulado,tamanho);
    evoluirReticulado(reticulado,tamanho);
    
    printf("\n");
    imprimeReticulado(reticulado,tamanho);
    desalocaReticulado(&reticulado,tamanho);
    return 0;
}