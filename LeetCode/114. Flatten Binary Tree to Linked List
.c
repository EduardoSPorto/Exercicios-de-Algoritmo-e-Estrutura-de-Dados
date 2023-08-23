/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void tests(struct TreeNode* root, struct TreeNode* head);

void flatten(struct TreeNode* root){
    tests(root,root);
}

void tests(struct TreeNode* root, struct TreeNode* head){

    if (root == NULL || root->left == NULL && root->right == NULL)
        return;

   // printf("%d ", root->val);

    if(root->left != NULL){
        tests(root->left,head);
        struct TreeNode* temp;
        struct TreeNode* temp2;

        temp = root->right;
        //temp->val = root->val;
        root->right = root->left;
        root->left = NULL;
        //head->right = temp;
        temp2 = root->right;
        //for(int i = 0; temp2->right !=NULL;i++){}
        while(temp2->right != NULL){
            temp2= temp2->right;
        }
            temp2->right = temp;
        //tests(root->left,head);
}
        tests(root->right,head);

}

//Começa pela cabeça
//Guarda cabeça->direita
/*
Copia todo lado esquerdo (em pos-ordem) para a cabeça->direita
cabeça = ultimo da copia
*/
//Repete
