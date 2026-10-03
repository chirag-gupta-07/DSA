class Solution {
public:
    void combinations(vector<int>&c,int t,vector<vector<int>>&v,vector<int>&temp,int i,int sum){
        if(sum==t){
            v.push_back(temp);
            return;
        }
        if(i>=c.size() || sum>t){
            return;
        }

            temp.push_back(c[i]);
            combinations(c,t,v,temp,i,sum+c[i]);

            temp.pop_back();
            combinations(c,t,v,temp,i+1,sum);
        }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinations(candidates,target,ans,temp,0,0);
        return ans;
    }
};