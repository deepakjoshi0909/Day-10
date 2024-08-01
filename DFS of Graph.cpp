class Solution {
  public:
  
    void solve(int V,vector<int>& ans,vector<int>adj[],vector<bool>& vis,int node){
        
        vis[node] = true;
        ans.push_back(node);
        
        
        for(int it : adj[node]){
            if(!vis[it]){
                solve(V,ans,adj,vis,it);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<bool>vis(V,false);
        solve(V,ans,adj,vis,0);
        return ans;
    }
};
