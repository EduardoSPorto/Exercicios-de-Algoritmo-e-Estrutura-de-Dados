
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i;
    int *new =(int*) malloc(sizeof(int) * 2 * n);

    for(i=0 ; i < n ; i++){
            new[2*i] = nums[i];

            new[2*i+1] = nums[i+n];
    };


    *returnSize=numsSize;
    return new;
}
