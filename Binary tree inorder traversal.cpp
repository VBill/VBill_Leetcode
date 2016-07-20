/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    vector<int> a;
    stack<TreeNode*> s;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        while(root!=NULL || !s.empty()){
            while(root!=NULL){
                s.push(root);
                root = root->left;
            }
            root = s.top(); s.pop();
            a.push_back(root->val);
            root = root->right;
        }
        return a;
    }
};

/*
  就是写个非递归的二叉树中序遍历。
  
  方法：不停地向左走，并把遇到的节点入栈。直到遇上空指针后开始把栈里内容“倒出来”回退。回退
  后输出节点里数据，然后进入右子树继续这个过程，如果没有右子树就继续回退。

  怎么想到的：画个复杂些的二叉树，把中序遍历（递归）的过程演示一下，就发现遍历的规律了。规律是：
  总是先输出最左边的，然后输出刚输出完的部分的父节点；最后在父节点的右边重复这个过程。
*/
