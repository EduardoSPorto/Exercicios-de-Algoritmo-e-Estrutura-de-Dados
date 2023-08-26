/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int findSecondMinimumValue( struct TreeNode* root ) {
    int smallerNow;
    int smallerLeft;
    int smallerRight;
//- - - Testa valor dos filhos3
    if ( root->left != NULL ) {
        if ( root->left->val == root->val ) {
            smallerLeft = findSecondMinimumValue( root->left );//-1
        } else {
            smallerLeft = root->left->val;
        }
        if ( root->right->val == root->val ) {
            smallerRight = findSecondMinimumValue( root->right );//5
        } else {
            smallerRight = root->right->val;
        }
    } else {
        return -1;
    }
//- - Testa quem é menor
    if ( smallerLeft < smallerRight ) {
        smallerNow = smallerLeft;
    } else if ( smallerRight < smallerLeft ){ 
        smallerNow = smallerRight;
    }
//- - /**/ Ultimos criterios // Não devolver -1
    if ( smallerLeft != -1 && smallerRight != -1 ) {
        printf( "Only -1" );
        return smallerNow;
    } else if ( smallerLeft != -1 ) {
        printf( "Smaler Left" );
        return smallerLeft;
    } else {
        printf( "Smaler Right" );
        return smallerRight;
    }
}