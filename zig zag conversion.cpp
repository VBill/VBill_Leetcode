class Solution {
public:
    string convert(string s, int numRows) {
        int n=numRows;
        string all[numRows];
        bool down = true;
        int id=1;
        char t[2];  t[1]='\0';
        for(int i=0; i<(int)s.size(); i++){
            t[0]=s.at(i);
            all[id-1].append(t);
            if(id==n){
                down = false;
            }else if(id==1){
                down = true;
            }
            if(down && id<n)
                id++;
            else if(!down && id>1)
                id--;
        }
        cout<<"good!"<<endl;
        string res;
        for(int i=0; i<numRows; i++){
            res.append(all[i]);
        }
        return res;
    }
};
