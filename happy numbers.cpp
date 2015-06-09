class Solution {
public:
    bool isHappy(int n) {
        set<int> loop;
        loop.insert(n);
        vector<int> store;
        while(true){
            while(n){
                store.push_back(n%10);
                n=n/10;
            }
            for(int i=0; i<(int)store.size(); i++){
                n+=store[i]*store[i];
            }
            if(n==1)return true;
            if(loop.count(n)!=0)
                return false;
            else
                loop.insert(n);
            store.clear();
        }
    }
};
