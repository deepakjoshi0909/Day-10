class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<int>vis(V,false);;
        queue<int>q;
        
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            
            for(int i=0;i<adj[temp].size();++i){
                if(!vis[adj[temp][i]]){
                    q.push(adj[temp][i]);
                    vis[adj[temp][i]] = true;
                }
            }   
        }
        return ans;
    }
};
