class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        stack <int> st;
        vector<int> ngi(nums.size());
        vector<int> ans;

        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[i]>nums[st.top()]){
                st.pop();
            }
            ngi[i] = st.empty()? nums.size() : st.top();
            st.push(i);
        }

        int i = 0;

        for(int j=0; j<=nums.size()-k; j++){

            if(i<j){
                i=j;
            }

            while(ngi[i]<j+k){
                i=ngi[i];
            }

            ans.push_back(nums[i]);
        }

        return ans;
    }
};