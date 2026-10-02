class Solution {
public:
    int pow2(int n){
        if(n==0){
            return 1;
        }

        long long half = pow2(n/2);
        half= (half*half)%1000000007;

        if(n%2==1){
            half = half * 2 % 1000000007;
        }

        return half;
    }
    int cntSub(vector<int>& nums, int t,int i,int j){
        long long MOD =1000000007;
        if(i>j){
            return 0;
        }

        if(nums[i] + nums[j]<=t){
            return (pow2(j-i) + cntSub(nums,t,i+1,j))%MOD;
        }

        return cntSub(nums,t,i,j-1);
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long int ans = cntSub(nums,target,0,nums.size()-1);
        return ans; 
    }
};