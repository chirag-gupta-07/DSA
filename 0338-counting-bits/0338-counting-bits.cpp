class Solution {
public:
    int count(int n,vector <int>&ans){
        if(n==0) return ans[n]=0;
        if(n==1) return ans[n]=1;
        if(ans[n]!=-1) return ans[n];

        return ans[n]=(n%2) + count(n/2,ans);
    }
    vector<int> countBits(int n) {
        vector<int>ans(n+1,-1);
        for(int i=0;i<=n;i++){
            count(i,ans);
        }
        return ans;

    }
};