class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int open=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && open==0){
                open++;
            }else if(s[i]=='(' && open>=1){
                ans+=s[i];
                open++;
            }else if(s[i]==')' && open>1){
                ans+=s[i];
                open--;
            }else if(s[i]==')' && open==1){
                open--;
            }
        }

        return ans;

    }
};