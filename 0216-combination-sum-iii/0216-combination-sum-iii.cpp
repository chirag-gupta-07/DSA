class Solution {
public:
    void generate(int t,int k,int i,vector<vector<int>>&v,vector<int>&temp,int sum){
        if(sum==t && temp.size()==k){
            v.push_back(temp);
            return;
        }
        if(i>=10 || sum>t || temp.size()>k){
            return;
        }

        temp.push_back(i);
        generate(t,k,i+1,v,temp,sum+i);
        temp.pop_back();
        generate(t,k,i+1,v,temp,sum);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        generate(n,k,1,ans,temp,0);
        return ans;
    }
};