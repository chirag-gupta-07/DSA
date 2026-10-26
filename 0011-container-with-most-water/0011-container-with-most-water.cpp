class Solution {
public:
    int maxArea(vector<int>& height) {
        int Max=0;
        int left=0;
        int right=(height.size())-1;
        while(left<right){
            int curr=(right-left)*(min(height[right],height[left]));
            Max=max(Max,curr);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }

        return Max;
    }
};