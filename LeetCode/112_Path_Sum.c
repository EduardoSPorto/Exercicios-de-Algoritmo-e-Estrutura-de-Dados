 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool tests(struct TreeNode* root, int sum, int target){
    bool catchTrue;
    printf(" * ");
    if (root == NULL){
        if (target == 0){
            printf("True NULL, ");
            return true;
        }else{
            printf("False NULL, ");
            return false;
        }
    }

    if(root->left != NULL){

        sum += root->left->val;
        printf("Left ( sum %d), ",sum);
        catchTrue = tests(root->left,sum,target);
        sum -= root->left->val;
        if(catchTrue == true){
            return true;
        }
    }

    if(root->right != NULL){
        sum += root->right->val;
        printf("Right ( sum %d), ",sum);
        catchTrue = tests(root->right,sum,target);
        sum -= root->right->val;

        if(catchTrue == true){
            return true;
        }
    }

    if(root->left == NULL && root->right == NULL){
        if(sum == target){
        printf("True Equality ( sum %d ) ( target %d ), ",sum, target);
        return true;
        }else{
        printf("False Equality ( sum %d ) ( target %d ), ",sum, target);
        return false;
        }
    }
    return false;
}

bool hasPathSum(struct TreeNode* root, int targetSum){
       if (root == NULL){
            return false;
        }
    int sum = root->val;
    //int sum = 0;
    //printf("Sum zero (%d),  ",sum);

    return tests(root, sum, targetSum);
}


