class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sizea=(int)s.size();
        if(sizea==0)return 0;
        bool used[300];
        int last_this_letter_appear[300];
        int *length = new int[sizea];
        memset(length, 0, sizea*sizeof(int));
        memset(last_this_letter_appear, 0, 300*sizeof(int));
        for(int x=0; x<300; x++){
            used[x]=false;
        }
        int ans=0, i=0;
        //code here
        for(int j=0; j<sizea; j++){
            int t_char=(int)s.at(j);
            if(used[t_char]==true){
                i=max(last_this_letter_appear[t_char]+1, i);
                last_this_letter_appear[t_char]=j;
            }else{
                used[t_char]=true;
                last_this_letter_appear[t_char]=j;
            }
            length[j]=j-i+1;
        }

        for(int x=0; x<sizea; x++){
            ans=max(ans, length[x]);
        }
        return ans;
    }
};
