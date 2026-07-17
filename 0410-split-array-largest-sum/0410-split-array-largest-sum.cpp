class Solution {
public:
    bool canSub(vector<int>& nums, long long int k,long long int mid){
        long long int sum=0;
        long long int cnt=1;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }else{
                cnt++;
                sum=nums[i];
            }
        }

        return cnt > k;
    }

    int splitArray(vector<int>& nums, int k) {
        long long int low = *max_element(nums.begin(),nums.end());
        long long int high = 0;
        for(int i=0;i<nums.size();i++){
            high+=nums[i];
        }
        long long int ans=0;
        long long int mid = (low+high)/2;

        while(low<=high){
            mid=(low+high)/2;

            if(canSub(nums,k,mid)){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        return low;

    }
};