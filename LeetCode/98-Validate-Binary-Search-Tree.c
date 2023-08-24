/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 /*
 int findMax(struct TreeNode* root)
{
    // Base case
    if (root == NULL)
        return INT_MIN;
 
    // Return maximum of 3 values:
    // 1) Root's data 2) Max in Left Subtree
    // 3) Max in right subtree
    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}

int findMin(struct TreeNode* root)
{
    // Base case
    if (root == NULL)
      return INT_MAX;
 
    // Return minimum of 3 values:
    // 1) Root's data 2) Max in Left Subtree
    // 3) Max in right subtree
    int res = root->data;
    int lres = findMin(root->left);
    int rres = findMin(root->right);
    if (lres < res)
      res = lres;
    if (rres < res)
      res = rres;
    return res;
}*/
 
bool BstTestes(struct TreeNode* root, double biggerThan, double lessThan){
    struct TreeNode* temp = root;
    int testeTam = 0;

    if( temp == NULL)
        return true;

    if( temp->val < biggerThan ){
        testeTam++;
    }

    if( temp->val > lessThan ){
        testeTam++;
    }
    if (testeTam > 0){
        return false;
    }
    /*if (temp->val = -2147483648){
        temp->val = -2147483647;
    }
    if (temp->val = 2147483647){
        temp->val = 2147483646;
    }*/
    double minusONe = temp->val;
    double plusOne = temp->val;

    if( BstTestes(temp->left, biggerThan, minusONe -1/*temp->val -1*/ )){
        if( BstTestes(temp->right, /*temp->val+1*/minusONe +1 , lessThan) ){
            return true;
        }else{
            return false;
            }
    }else{
        return false;
    }
}
    /*if ((isvalidBST(temp->left, biggerThan, temp->val)
    || isvalidBST(temp->left, biggerThan, temp->val)) &&
    (isvalidBST(temp->left, biggerThan, temp->val) || isvalidBST(temp->left, biggerThan, temp->val)){
        return true 
    }
    return false;

*/

bool isValidBST(struct TreeNode* root){
    /*int maior = findMax( root)
    int menor = findMin( root)
    *///return BstTestes(root,INT_MIN,INT_MAX);
    return BstTestes(root,-9223372036854775808,9223372036854775807);
    
}

