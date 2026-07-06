class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        int mid=(low+high)/2;
        int flag;
        while(low<=high){
            mid=(low+high)/2;
            flag=arr[mid]-mid-1;
            if(flag<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        if(flag>=k){
            return arr[mid]-(flag-k+1);
        }else{
            return arr[mid]+k-flag;
        }
    }
};