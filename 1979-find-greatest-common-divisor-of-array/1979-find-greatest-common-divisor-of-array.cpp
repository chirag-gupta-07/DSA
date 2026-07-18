class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        return GCD(max,min);

    }
    int GCD(int m,int n){
        if(n==1){
            return 1;
        }else if(n==0){
            return m;
        }
        int temp=n;
        n=m%n;
        m=temp;
        return GCD(m,n);
    }
};