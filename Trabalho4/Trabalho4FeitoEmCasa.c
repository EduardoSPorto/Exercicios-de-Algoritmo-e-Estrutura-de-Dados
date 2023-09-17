#include <stdio.h>
#include <stdlib.h>
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int compareSize (const void * a, const void * b);
int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes);
int main(){
    int **newVal = (int**) malloc(sizeof( int *)* 4); 
    for ( int i = 0; i < 4; i++){ 
      newVal[i] = (int*) malloc(sizeof( int *)* 2);
    }
    newVal[0][0] = 1;
    newVal[0][1] = 3;
    newVal[1][0] = 2;
    newVal[1][1] = 6;
    newVal[2][0] = 8;
    newVal[2][1] = 10;
    newVal[3][0] = 15;
    newVal[3][1] = 18;

    int *intervalsColSize = (int*) malloc(sizeof( int )* 4); 
    intervalsColSize[0] = 2;
    intervalsColSize[1] = 2;
    intervalsColSize[2] = 2;
    intervalsColSize[3] = 2;
    int *tamanhoRetorno = 3;
    int **returnColumnSizes;
    
    int **resultado = merge(newVal,4,intervalsColSize,&tamanhoRetorno,&returnColumnSizes);
    printf("Saiu");
    }

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes){
    int i = 0, j = 1, k, l;
    printf("intervalsSize:%d\n",intervalsSize);
    for( int lip = 0; lip < intervalsSize; lip++){
      printf("IntervaColSize: %d\n",intervalsColSize[lip]);
    }
    //
    qsort( intervals, intervalsSize, sizeof( int* ), compareSize );

    for( k = 0; k != intervalsSize ; k++) {
      for( l = k + 1 ; l !=  intervalsSize ; l++){
        if ( intervals[ k ][ j ] < intervals[ l ][ j - 1 ]){
        break;
        }
        if ( intervals[ l ][ j ]  > intervals[ k ][ j ]){
            intervals[ k ][ j ] = intervals[ l ][ j ];
        }
      }
        if (i != k){
            intervals[ i ][ j - 1 ] = intervals[ k ][ j-1 ];
            intervals[ i ][ j ] = intervals[ k ][ j ];
        }
        i++;
        if (l != k ) {
            k--;
            k = l - 1;
        }else{
            k--;
        }
    }

    *returnSize = i; 

    int **newVal = malloc( sizeof( int* ) * *returnSize); 
    *returnColumnSizes = malloc ( *returnSize * sizeof( int ) );
    for ( k = 0; k < *returnSize ; k++ ) {
        (*returnColumnSizes)[ k ] = 2;
        newVal[ k ] = malloc( sizeof( int ) * 2);

    }

    for ( k = 0; k< *returnSize ; k++ ) {
        newVal[ k ][ j - 1] = intervals[ k ][ j - 1 ];
        newVal[ k ][ j ] = intervals[ k ][ j ];
    }
    return newVal;
}

int compareSize (const void * a, const void * b) {
   return ( **( int** ) a - **( int** ) b );
}
