
#include <stdio.h>

//Acima de tudo:
    espaço = 0(n);

int main()
{
    int amount[] = {1,4,2};
    int amountSize = 3;
    printf("%d",fillCups(amount, amountSize));

    return 0;
}
// 0 = cold [1]
// 1 = warm [4]
// 2 = hot [2]

// um segundo = 

int fillCups(int* amount, int amountSize){
    int lessSeconds = -1, countSeconds = 0,i, i2 = 0 , i3 = 0 ; 
    //int *temp = (int*) malloc(sizeof((int)*10));
    //mallocar temp, sera repleto de 0,1,2, para permitir comparar os que já foram contados;
    //insustentavel tamanho, reconsiderar metodo
    
    // se temp[0]== temp[1] vai para proximo segundo 
    //for(int i = 0; i < amountSize; i++){
        
        //testa se tem um diferentem, se tiver um diferente conta só um segundo 
        for(i2 = 0 ; amount[i2] < amountSize; i2++ ) {
            if(amount[i2] != 0){
            for(i3 = 0 ; amount[i3] < amountSize; i3++ ){
            if(amount[i2] == amount[i3]){
                i3++;
            }
            countSeconds++;
            }
            amount[i2]--;
        }
        //metodo ineficiente
        /*
        if(i3%2 == 0){
            //countSeconds++; Já que já tem um diferente não precisa contar o segundo deste;
            countSeconds++;
        }
        */