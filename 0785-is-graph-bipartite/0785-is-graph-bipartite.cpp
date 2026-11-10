class Solution {
public:
    bool dfs(int node,int c,vector<vector<int>>& adj,vector<int>& val){
        if(val[node]==0) val[node] = c;
        else return val[node]==c;
        bool ans = true;
        for(auto it:adj[node]){
            ans = ans && dfs(it,-1*c,adj,val);
        }
        return ans;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> val(n,0);
        int ans = true;
        for(int i=0;i<n;i++){
            if(val[i]) continue;
            ans = ans && dfs(i,1,adj,val);
        }
        return ans;
    }
};