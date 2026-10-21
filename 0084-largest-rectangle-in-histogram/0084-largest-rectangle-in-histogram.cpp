class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack <int> st;
        int n = heights.size();
        vector<int> nsi(n);
        vector<int> psi(n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                nsi[i] = st.top();
            }else{
                nsi[i] = n;
            }
            st.push(i);
        }

        while(!st.empty()){
            st.pop();
        }

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                psi[i] = st.top();
            }else{
                psi[i] = -1;
            }
            st.push(i);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            int temp = (nsi[i]-psi[i]-1)*heights[i];
            ans = max(ans,temp);
        }

        // for(int i=0;i<n;i++){
        //     cout<<nsi[i]<<" ";
        // }
        // cout<<"\n";

        // for(int i=0;i<n;i++){
        //     cout<<psi[i]<<" ";
        // }

        return ans;
    }
};