// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool dfs(vector<int> adj[], int u, vector<int> &vis, int color) {
        vis[u] = color;
        for (int v: adj[u]) {
            if (vis[v] == -1) {
                if (!dfs(adj, v, vis, !color)) return false; 
            }
            else if (vis[v] == color)
                return false;
        }
        return true;
    }
    bool bfs(vector<int> adj[], int i, vector<int> &vis, int color) {
        queue<int> q;
        q.push(i);
        vis[i] = color;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v: adj[u]) {
                if (vis[v] == -1) {
                    vis[v] = !vis[u];
                    q.push(v);
                }
                else if (vis[v] == vis[u])
                    return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis(V, -1);
	    
	    for (int i = 0; i < V; i++) {
	        if (vis[i] == -1)
	            if (!dfs(adj, i, vis, 0)) return false;
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends