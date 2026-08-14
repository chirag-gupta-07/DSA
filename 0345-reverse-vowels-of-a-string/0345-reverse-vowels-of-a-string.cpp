class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        if(s.size()==0){
            return s;
        }
        while(i<j){
            while(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && i<j){
                i++;
            }
            while(s[j]!='A' && s[j]!='E' && s[j]!='I' && s[j]!='O' && s[j]!='U' && s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && i<j){
                j--;
            }
            char c=s[i];
            s[i]=s[j];
            s[j]=c;
            i++;
            j--;
        }

        return s;
    }
};