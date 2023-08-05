
#include <stdio.h>

int fillCups(int* amount, int amountSize);
int main()
{
    int amount [ ] = { 5 , 4 , 4 };
    int amountSize = 3;
    printf ( "\nR = %d" , fillCups ( amount , amountSize ) );

    return 0;
}

int fillCups(int* amount, int amountSize){
    int countSeconds = 0 , i , i2;
    int temp ;

    do{
    for ( i = 1; i < amountSize; i++ ) {
        for ( i2 = 0; i2 < i; i2 ++ ) {
            if ( amount [ i ] > amount [ i2 ] ) {
                temp = amount [ i ];
                amount [ i ] = amount [ i2 ];
                amount [ i2 ] = temp;
            }
        }
    }

    if ( amount [ 1 ] != 0 ) {
    amount [ 0 ] --;
    amount [ 1 ] --;
    countSeconds ++;
    }

    }while ( amount [ 1 ] != 0 || amount[2] !=0 );

    while ( amount [ 0 ] != 0 ){
    amount [ 0 ] --;
    countSeconds ++;
    }

    return countSeconds;
}
