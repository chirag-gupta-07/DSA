class Solution {
public:
    int countSegments(string s) {
        int cnt=0;
        string a="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                a+=s[i];
            }else{
                if(a!=""){
                    a="";
                    cnt++;
                }
            }
        }

        if(a!=""){
            cnt++;
        }

        return cnt;
    }
};