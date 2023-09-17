int compareSize( const void * a, const void * b );
int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes){
    int i = 0, j = 1, k, l;

    qsort( intervals, intervalsSize, sizeof( int* ), compareSize );

    for ( k = 0; k != intervalsSize ; k++) {
        for ( l = k + 1 ; l !=  intervalsSize ; l++ ) {
            if ( intervals[ k ][ j ] < intervals[ l ][ j - 1 ] ) {
            break;
        }
            if ( intervals[ l ][ j ]  > intervals[ k ][ j ] ) {
                intervals[ k ][ j ] = intervals[ l ][ j ];
        }
        }
        if ( i != k ) {
            intervals[ i ][ j - 1 ] = intervals[ k ][ j - 1 ];
            intervals[ i ][ j ] = intervals[ k ][ j ];
        }
        i++;
        if ( l != k ) {
            k--;
            k = l - 1;
        } else {
            k--;
        }
    }

    *returnSize = i; 

    int **newVal = malloc( sizeof( int* ) * *returnSize ); 
    *returnColumnSizes = malloc ( *returnSize * sizeof( int ) );
    for ( k = 0; k < *returnSize ; k++ ) {
        ( *returnColumnSizes )[ k ] = 2;
        newVal[ k ] = malloc( sizeof( int ) * 2);
    }

    for ( k = 0; k < *returnSize ; k++ ) {
        newVal[ k ][ j - 1 ] = intervals[ k ][ j - 1 ];
        newVal[ k ][ j ] = intervals[ k ][ j ];
    }
    return newVal;
}

int compareSize( const void * a, const void * b) {
   return ( **( int** ) a - **( int** ) b );
}
