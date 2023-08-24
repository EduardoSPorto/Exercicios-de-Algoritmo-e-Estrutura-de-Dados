/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root){
    struct TreeNode* temp = root;
    struct TreeNode* tradeAux;
    //printf("*");
    if(root == NULL){
        //printf("Dragon");
        return root;
    }
    if(temp->left != NULL){
        if (temp->left->left != NULL || temp->left->right != NULL) {
            temp->left = invertTree (temp->left);
        }
    }
    if(temp->right != NULL ){
        if(temp->right->left != NULL || temp->right->right != NULL) {
            temp->right = invertTree (temp->right);
        }
    }
    //if (temp->right != NULL && temp->left != NULL){
        tradeAux = temp->right;
        temp->right = temp->left;
        temp->left = tradeAux;
    //}
    return temp;
}
/*
    if((temp->left != NULL) && (temp->left->left != NULL || temp->left->right != NULL)) {
        temp->left = invertTree (temp->left);
    }

    if((temp->right != NULL) && (temp->right->left != NULL || temp->right->right != NULL)) {
        temp->right = invertTree (temp->right);
    }
*/


// TreeNode *temp = root
//if (temp->left e) (temp->left->left ou temp->left->right) não é NULL
    // Chama temp->left = invertTree (temp->Left)
    //(após sair da subfunção assumir que ela só continua a testar o proximo)
//if temp (temp->right e) (temp->right->left ou temp->right->right) não é NULL
    // Chama temp->right = invertTree (temp->right)
//if temp-> right e temp->left diferentes de NULL: 
    //temp->right e temp->left inverte

///retorna temp
