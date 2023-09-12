//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int node, int V, vector<int> adj[], vector<int>& visited,vector<int>& path) {
        visited[node]=1;
        path[node]=1;
        
        for(auto it: adj[node]) {
            if(!visited[it]) {
                if(dfs(it,V,adj,visited,path)) return true;
            } else if(visited[it] && path[it])return true;
        }
        path[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> visited(V,0);
        vector<int> path(V,0);
	    
	    for(int i = 0; i < V; i++) {
	        if(!visited[i]){
	            if(dfs(i,V,adj,visited,path)) return true;
	        }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends