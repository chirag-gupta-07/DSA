class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        vector<int>v(26,0);
        unordered_map <char,int> mp;
        int mx=0;
        while(i<s.size() && j<s.size()){
            char t = s[j];
            if(mp[t]==0){
                mp[t]++;
                j++;
            }else if(mp[t]>0){
                mx= max(mx,j-i);
                while(s[i]!=t){
                    mp[s[i]]--;
                    i++;
                }
                i++;
                j++;
            }
        }

        mx = max(j-i,mx);
        return mx;
    }
};