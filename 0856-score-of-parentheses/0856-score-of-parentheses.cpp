class Solution {
public:
    int scoreOfParentheses(string s) {
        int cnt=0;
        int temp=0;
        for(int i=0;i<s.size();i++){
            cout<<i<<" ";
            char t=s[i];
            if(t=='('){
                temp++;
            }else{
                temp--;
                if(s[i-1]=='('){
                    cnt+=pow(2, temp);
                }
                

            }
        }
        return cnt;
    }
};