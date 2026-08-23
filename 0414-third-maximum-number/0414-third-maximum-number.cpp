class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int one=LLONG_MIN,two=LLONG_MIN,three=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>three && nums[i]>two && nums[i]>one){
                three=two;
                two=one;
                one=nums[i];
                
            }else if(nums[i]>two && nums[i]>three && nums[i]!=one){
                three=two;
                two=nums[i];
            }else if(nums[i]>three && nums[i]!=two && nums[i]!=one){
                three=nums[i];
            }
        }

        cout<<one<<two<<three;
        if(three==LLONG_MIN){
            return one;
        }
        return three;
    }
};