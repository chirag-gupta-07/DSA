class Solution {
public:
    void combination(vector<int>& c,int t,vector<vector<int>> &v,int i,vector<int>&temp,int sum){
        if(sum==t){
            v.push_back(temp);
            return;
        }

        if(i>=c.size() || sum>t){
            return;
        }

        for(int j=i;j<c.size();j++){

            if(j>i && c[j]==c[j-1]){
                continue;
            }
            if(c[j]>t){
                break;
            }
            
            temp.push_back(c[j]);
            combination(c,t,v,j+1,temp,sum+c[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        combination(candidates,target,ans,0,temp,0);
        return ans;
    }
};