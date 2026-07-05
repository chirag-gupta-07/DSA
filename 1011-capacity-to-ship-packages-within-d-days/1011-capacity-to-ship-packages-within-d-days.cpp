class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
        }
        
        int mid=(low+high)/2;
        int ans=mid;

        while(low<=high){
            mid=(low+high)/2;
            int cnt=0;
            int sum=0;
            for(int i=0;i<weights.size();i++){
                if(sum+weights[i]<=mid){
                    sum+=weights[i];
                }else{
                    sum=weights[i];
                    cnt++;
                }
            }

            if(sum>0){
                cnt++;
            }

            if(cnt<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return ans;

    }
};