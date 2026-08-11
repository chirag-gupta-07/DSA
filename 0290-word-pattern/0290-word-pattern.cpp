class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map <char,string> mp;
        unordered_map <string,char> mp2;
        int i=0;
        int j=0;
        while(pattern[i]!='\0'){
            if(j>=s.size()){
                return false;
            }
            string t="";
            while(s[j]!=' ' && s[j]!='\0'){
                t+=s[j];
                j++;
            }
            if(mp.contains(pattern[i])){
                if(mp[pattern[i]]!=t){
                    return false;
                }
            }else if(mp2.contains(t)){
                if(mp2[t]!=pattern[i]){
                    return false;
                }
            }else{
                mp[pattern[i]]=t;
                mp2[t]=pattern[i];
            }
            j++;
            i++;
        }

        if(j<s.size()){
            return false;
        }

        return true;
    }
};