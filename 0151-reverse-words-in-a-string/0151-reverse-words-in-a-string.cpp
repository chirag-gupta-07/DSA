class Solution {
public:
    string reverseWords(string s) {
        int i=s.size()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        s= s.substr(0,i+1);
        string ans = "";
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && temp!=""){
                ans=" "+temp+ans;
                temp = "";
            }else if(s[i]!=' '){
                temp+=s[i];
            }

        }
        if(temp!=" "){
            ans=temp+ans;
        }
        return ans;
    }
};