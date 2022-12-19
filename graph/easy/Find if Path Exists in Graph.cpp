 bool dfs(vector<vector<int>>&graph,vector<int>&visited,int curr,int destination){
    // check if we have reached our destination
    if(curr==destination){
        return 1;
    }
    // check if it's already visited 
    if(visited[curr]){
        return 0;
    }
    // if not visited then make it visited
    visited[curr]=1;
    // make a traversal to all it's neighbour
    for(auto i=0;i<graph[curr].size();i++){
        if(dfs(graph,visited,graph[curr][i],destination)){
            return 1;
        }
    }
    // if no one returns then return
    return 0;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        
        for(auto i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>visited(n,0);
         return dfs(graph,visited,source,destination);
    }
