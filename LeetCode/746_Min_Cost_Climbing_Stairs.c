#include <stdio.h>
#include <stdlib.h>

int minCostClimbingStairs(int* cost, int costSize);
int min(int a,int b);

int main()
{
    int *costMain;
    costMain = (int*) malloc(sizeof(int) * 10);
    costMain[0] = 10;
    costMain[1] = 15;
    costMain[2] = 20;
    costMain[3] = 20;
    costMain[4] = 20;
    costMain[5] = 20;
    costMain[6] = 20;
    costMain[7] = 20;
    costMain[8] = 20;
    costMain[9] = 20;
    /*
        int c = 0;
    while(c <= 9){
        printf("\n%d",*costMain);
        *costMain++;
        c++;
    }
    */
    printf("\n\n\n%d", 10);

    printf("%d ",minCostClimbingStairs(costMain, 10));
    //free(costMain);
    return 0;
}


 int minCostClimbingStairs(int* cost, int costSize){

    int resp,i;
    int *newCost = cost;

    newCost = (int*) realloc(newCost, sizeof(int ) * (costSize + 1));

    int c=0;
    newCost[costSize] = 0;

        while(c <= 9){
        printf("\n%d",*newCost);
        *newCost++;
        c++;
    }
/*
    for(i = costSize - 3; i >= 0; i--){
        if (cost[i + 1] < cost[i + 2])
        {
            cost[i] = cost[i] + cost[i + 1];
        }
        else
        cost[i] = cost[i] + cost[i + 2];
    }
    if (cost[0] < cost [1])
        return cost[0];
        //else
        return cost[1];
*/
}