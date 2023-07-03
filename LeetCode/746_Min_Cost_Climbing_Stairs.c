#include <stdio.h>
#include <stdlib.h>

int minCostClimbingStairs(int* cost, int costSize);
int min(int a,int b);

int main()
{
    int *costMain;
    costMain = (int*) malloc(sizeof(int) * 10);
    costMain[0] = 1;
    costMain[1] = 100;
    costMain[2] = 1;
    costMain[3] = 1;
    costMain[4] = 1;
    costMain[5] = 100;
    costMain[6] = 1;
    costMain[7] = 1;
    costMain[8] = 100;
    costMain[9] = 1;
    //1,100,1,1,1,100,1,1,100,1
    /*
        int c = 0;
    while(c <= 9){
        printf("\n%d",*costMain);
        *costMain++;
        c++;
    }
    
    //printf("\n\n\n%d", 10);
    */
   
    printf("%d ",minCostClimbingStairs(costMain, 10));
    //free(costMain);
    return 0;
}


 int minCostClimbingStairs(int* cost, int costSize){

    int resp ,i , *newCost = cost;

    newCost = (int*) realloc(newCost, sizeof(int ) * (costSize + 1));

    for(i = costSize - 3; i >= 0; i--){
        if (newCost[i + 1] < newCost[i + 2])
        {
            newCost[i] = newCost[i] + newCost[i + 1];
        }
        else
        newCost[i] = newCost[i] + newCost[i + 2];
    }
    if (newCost[0] < newCost [1])
        return newCost[0];
        return newCost[1];

}