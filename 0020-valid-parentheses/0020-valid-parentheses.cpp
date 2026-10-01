class Solution {
public:
    bool isValid(string s) {
        stack <int> stk;
        for(int i=0;i<s.size();i++){
            char t= s[i];
            if(t=='(' || t=='{' || t=='['){
                stk.push(t);
            }else if(t==')' || t=='}' || t==']'){
                if(stk.empty()){
                    return false;
                }else{
                    if((stk.top()=='(' && t==')') || (stk.top()=='[' && t==']') || (stk.top()=='{' && t=='}')){
                        stk.pop();
                    }else{
                        return false;
                    }
                }
            }

        }
            if(stk.empty()){
                return true;
            }
            return false;
    }
};