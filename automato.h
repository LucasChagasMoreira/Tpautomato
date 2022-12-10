#ifndef __FUNCTIONS__
#define __FUNCTIONS__
#include <stdio.h>
#include <stdlib.h>


int **alocarReticulado(int ordem);
void desalocaReticulado(int ***M, int ordem);
void LeituraReticulado(int **M, int ordem);
void imprimeReticulado(int **M,int size);
void evoluirReticulado(int **M,int size);
int verifica(int**M,int size,int row,int col);

#endif