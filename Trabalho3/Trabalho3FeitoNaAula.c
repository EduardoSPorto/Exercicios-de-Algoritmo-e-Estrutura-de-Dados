/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int findSecondMinimumValue(struct TreeNode* root){
    int smallerNow;
    int smallerLeft;
    int smallerRight;
//- - - Testa valor dos filhos
    if (root->left != NULL){
        smallerLeft = findSecondMinimumValue(root->left);//-1
        smallerRight = findSecondMinimumValue(root->right);//5
    }else{
        return -2;
    }
//- - Testa quem é menor
    if ( root->right != NULL && root->left != NULL){
        if(root->left->val < root->right->val ){
            smallerNow = root->left->val;
        }
        } else { 
            smallerNow = root->right->val;
    }
//- - /**/ Ultimos criterios, se não devolve -1
    if ( root->val == smallerNow ) {
        if ( root->val < smallerLeft ) {
            printf("Samler Left");
            return smallerLeft;
        } else if (root->val < smallerRight){
            printf("Samler Right");
            return smallerRight;
        }/* else if (smallerLeft == -1 || smallerRight == -1 ){
                printf("Only -1");
                return -1;
            }*/ else {
            printf("No Smaller");
            return root->val;
        }
    }
    else { 
        return -1 ;
    }
}