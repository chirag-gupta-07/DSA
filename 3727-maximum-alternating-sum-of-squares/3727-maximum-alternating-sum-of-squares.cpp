class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(),nums.end());

        long long ans=0;
        int t = (nums.size()/2);

        for(int i=0;i<t;i++){
            ans -=(nums[i]*nums[i]);
        }

        for(int i=t;i<nums.size();i++){
            ans+=(nums[i]*nums[i]);
        }

        return ans;
    }
};