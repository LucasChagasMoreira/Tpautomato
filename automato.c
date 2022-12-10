#include "automato.h"


int **alocarReticulado(int ordem) {
    int **mat = malloc(ordem * sizeof(int*));

    for (int i=0;i<ordem;i++)
    {
        mat[i] = malloc(ordem * sizeof(int*));
    }
    return mat;
}
void desalocaReticulado(int ***M, int ordem) {
	for(int i = 0; i < ordem; i++){
		free((*M)[i]);
	}
	free(*M);
}
void LeituraReticulado(int **M, int ordem) {
	for(int i = 0;i<ordem;i++){
		for(int j = 0;j<ordem;j++){
			scanf("%d",&M[i][j]);
		}
	}
}
void imprimeReticulado(int **M,int size){
    for(int i = 0;i<size;i++){
		for(int j = 0;j<size;j++){
			printf("%d ",M[i][j]);
		}
        printf("\n");
	}
}
int verifica(int**M,int size,int row,int col){
    int count = 0;
    for(int i = row-1 ; i<=row+1 ; i++){
        for(int j = col-1 ; j<=col+1 ; j++){
            if((i == row && j == col) || (i<0||j<0) || (i>=size || j>=size)){
                continue;
            }
            if(M[i][j]==1){
                count++;
            }
        }
    }
    return count;
}
void evoluirReticulado(int **M,int size){
    int aux;
    for(int i = 0; i<size;i++){
        for(int j = 0; j<size;j++){
            aux = verifica(M,size,i,j);
            if( (M[i][j] == 1) && (aux == 2||aux == 3) ){
                printf("entrou na condiçao de vida\n");
                continue;
            }else if( (M[i][j] == 1) && (aux > 3||aux<2)){
                printf("entrou na condiçao de morte\n");
                M[i][j] = 0;
                printf("%d\n",(M[i][j]));
            }else if((M[i][j] == 0) && (aux == 3)){
                printf("entrou na condiçao de renascer\n");
                M[i][j] = 1;
            }
        }
        
    }
    
}

