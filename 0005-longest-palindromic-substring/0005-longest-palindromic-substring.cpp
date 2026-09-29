class Solution {
public:
    int splitAroundCenter(string s,int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }

    string longestPalindrome(string s) {
        int ans=1;
        int st=0;
        int end=0;
        for(int i=0;i<s.size();i++){
            int odd = splitAroundCenter(s,i,i);
            int even = splitAroundCenter(s,i,i+1);
            ans = max(odd,even);
        

            if(ans> end-st){
                st = i-(ans-1)/2;
                end = i+(ans)/2;
            }
        }

        string t = s.substr(st,end-st+1);
        return t;
    }
};