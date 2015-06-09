class Solution {
public:
    void reverseWords(string &s) {
        stack<string> all;
        string t;
        for(int i=0; i<(int)s.size(); i++){
            if(s[i]!=' '){
                t+=s[i];
            }else{
                if(t.size()!=0){
                    all.push(t);
                    t.clear();
                }
            }
        }
        if(t.size()!=0){
            all.push(t);
            t.clear();
        }

        s.clear();
        while(all.size()>1){
            s+=all.top();
            s+=' ';
            all.pop();
        }
        if(all.size()!=0){
            s+=all.top();
            all.pop();
        }
    }
};
