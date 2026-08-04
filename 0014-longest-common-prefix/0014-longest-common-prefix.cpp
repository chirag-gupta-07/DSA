class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            if(ans.empty()){
                break;
            }
            int n=max(strs[i].size(),ans.size());
            for(int j=0;j<n;j++){
                if(ans[j]!=strs[i][j]){
                    ans = strs[i].substr(0,j);
                    break;
                }
            }
        }

        return ans;
    }
};