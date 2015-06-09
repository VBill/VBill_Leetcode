class Solution {
public:
    vector<string> all;
    int total_pa;

    void dfs(int step, string ans, int rused){
        if(step==0){
            while(rused){
                ans+=')';
                rused--;
            }
            all.push_back(ans);
        }else{
            string t_ans=ans;
            t_ans+='(';
            dfs(step-1, t_ans, rused);

            if(rused>step){
                    t_ans=ans;
                    t_ans+=')';
                    dfs(step, t_ans, rused-1);
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        //n is lused
        string ans="(";
        total_pa=n;
        dfs(n-1, ans, n);
        return all;
    }
};
