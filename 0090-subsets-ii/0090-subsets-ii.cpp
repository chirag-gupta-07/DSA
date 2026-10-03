class Solution {
public:
    void subsets(vector<int>&nums,vector<vector<int>> &v,int i,vector<int>&temp){
        v.push_back(temp);

        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]){
                continue;
            }
            temp.push_back(nums[j]);
            subsets(nums,v,j+1,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;

        subsets(nums,ans,0,temp);
        return ans;
    }
};