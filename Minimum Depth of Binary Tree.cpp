class Solution {
public:
    int findMin(TreeNode *root){
        if(root->left!=NULL && root->right!=NULL)
            return 1+min(findMin(root->left), findMin(root->right));
        else if(root->left!=NULL && root->right==NULL)
            return 1+findMin(root->left);
        else if(root->left==NULL && root->right!=NULL)
            return 1+findMin(root->right);
        else
            return 1;
    }

    int minDepth(TreeNode *root) {
        if(root==NULL)return 0;
        return findMin(root);
    }
};
