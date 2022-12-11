#include "automato.h"
#include <stdio.h>
#include <stdlib.h>



int main(){
    int tamanho = 10;
    
    AutomatoCelular **reticulado;
    FILE *txt = fopen("texto.txt","r");
    fscanf(txt,"%d",&tamanho);
    reticulado = Reticuladoarq(txt,tamanho);

    imprimeReticulado(reticulado,tamanho);

    evoluirReticulado(reticulado,tamanho);

    
    printf("\n");
    imprimeReticulado(reticulado,tamanho);
    desalocaReticulado(&reticulado,tamanho);
    return 0;
}
