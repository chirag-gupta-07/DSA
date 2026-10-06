class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        int open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }else{
                if(open==0){
                    cnt++;
                }else{
                    open--;
                }
            }
        }
        cnt+=open;
        return cnt;
    }
};