/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    int lesserSize = 1;
    int leftSize = 1, rightSize = 1;
    struct TreeNode* temp = root;
    if( root == NULL ){
        return 0;
    }
    if (temp->left != NULL){
        leftSize += minDepth(temp->left);
        printf("rgt_");
    }  
    if (temp->right != NULL){
        rightSize += minDepth(temp->right);
        printf("rft_");
    }/*
    if(leftSize < rightSize){
        lesserSize = leftSize;
    }else{
        lesserSize = rightSize;
    }*/
    if(leftSize < rightSize && temp->left != NULL){
        lesserSize = leftSize;
    }else if (temp->right != NULL){
        lesserSize = rightSize;
    }else {
        lesserSize = leftSize;
    }
    return lesserSize;
}
// Fazer o mim depth sempre retornando o menor de cada, e ir somando o menor para retornar no final

//Serai necessario igualar a temp, seria possivel usar root direto

/*
    if( root == NULL ){
        return 0;
    }
    int lesserSize = 1
    struct TreeNode* temp = root
    if ( temp->left == NULL && temp->right == NULL){
        return lesserSize;
    }
    if (temp->left != NULL)
        leftSize += minDepth(temp->left);  
    if (temp->right != NULL)
        rightSize += minDepth(temp->right);
    if(leftSize < rightSize){
        return leftSize;
    }else{
        return rightSize;
    }
*/

