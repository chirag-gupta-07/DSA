class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> vis(graph.size(),-1);
        int clr = 0;
        queue <int> q;
        int st = 0;

        for(int i=0;i<graph.size();i++){
            if(vis[i]==-1){
                clr = 0;
                q.push(i);
                vis[i] = clr;

                while(!q.empty()){
                    int t = q.front();
                    q.pop();

                    for(auto it : graph[t]){
                        if(vis[it]==-1){
                            vis[it]=!vis[t];
                            q.push(it);
                        }else if(vis[it]==vis[t]){
                            return false;
                        }
                    }
                }   
            }
        }
        

        return true;
    }
};