class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        int flag=1;

        for(int i=0;i<s.size();i++){
            if(mp1[s[i]]==0){
                mp1[s[i]]=t[i];
            }else if(mp1[s[i]]!=t[i]){
                flag=0;
                break;
            }
        }

        for(int i=0;i<t.size();i++){
            if(mp2[t[i]]==0){
                mp2[t[i]]=s[i];
            }else if(mp2[t[i]]!=s[i]){
                flag=0;
                break;
            }
        }

        return flag==1;
        
    }
};