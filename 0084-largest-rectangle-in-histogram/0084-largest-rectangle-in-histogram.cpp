class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack <int> st;
        int n = heights.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int idx = st.top();
                st.pop();
                int psi;
                if(st.empty()){
                    psi = -1;
                }else{
                    psi = st.top();
                }

                ans = max(ans,heights[idx]*(i-psi-1));

            }
            st.push(i);
        }

        if(st.empty()){
            ans = max(ans,heights[n-1]*(n));
        }else{
            ans = max(ans,heights[n-1]*(n-st.top()-1));
        }

        while(!st.empty()){
            int ele = st.top();
            st.pop();
            int psi = st.empty()?-1:st.top();
            ans = max(ans,heights[ele]*(n-psi-1));
        }

        return ans;
    }
};