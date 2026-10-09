class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(open%2!=0){
                    cnt++;
                    open--;
                }
                open+=2;
            }else{
                open--;

                if(open<0){
                    cnt++;
                    open=1;
                }
            }
        }
        
        return cnt+open;
    }
};