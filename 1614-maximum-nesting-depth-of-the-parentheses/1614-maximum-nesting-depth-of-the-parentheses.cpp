class Solution {
public:
    int maxDepth(string s) {
        vector<int> v;
        int ans=0;
        for(int i=0;i<s.size();i++){
            char t = s[i];
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                v.push_back(s[i]);
            }else if(v.size()!=0){
                if(v[v.size()-1]=='(' && t==')'){
                    v.pop_back();
                }else if(v[v.size()-1]=='[' && t==']'){
                    v.pop_back();
                }else if(v[v.size()-1]=='{' && t=='}'){
                    v.pop_back();
                }
            }

            ans= max(ans,(int)v.size());
        }

        return ans;

    }
};