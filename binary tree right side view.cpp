class Solution {
public:
    vector<int> rightSideView(TreeNode *root) {
        vector<int> all;
        if(root==NULL)return all;
        queue<pair<TreeNode*, int> > q;
        TreeNode *l, *r;
        int pre_layer=-1, layer=0;
        int pre_val=0x7fffffff;
        q.push(make_pair(root, layer));

        while(!q.empty()){
            //cout<<q.front().first->val;
            l=q.front().first->left;
            r=q.front().first->right;
            layer=q.front().second;
            if(l){
                q.push(make_pair(l, layer+1));
            }
            if(r){
                q.push(make_pair(r, layer+1));
            }
            if(q.front().second != pre_layer && layer!=0){
                all.push_back(pre_val);
            }
            pre_val=q.front().first->val;
            pre_layer=layer;
            if(q.size()==1)all.push_back(pre_val);
            q.pop();
        }

        return all;
    }
};
