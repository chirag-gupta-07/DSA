class Solution {
public:
    void dfs(int i,int vis[],vector<int> adj[]){
        vis[i]=1;
        for(int it: adj[i]){
            if(vis[it]==0){
                dfs(it,vis,adj);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n-1>connections.size()){
            return -1;
        }

        vector<int> adj[n];

        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }

        int vis[n];
        int cnt = 0;
        for(int i=0;i<n;i++){
            vis[i]=0;
        }

        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,vis,adj);
                cnt++;
            }
        }

        return cnt-1;
    }
};