class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[node] = true;

        for(int neigh : adj[node]) {
            if(!vis[neigh]) {
                dfs(neigh, adj, vis);
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        // Step 1: build adjacency list
        vector<vector<int>> adj(n);

        for(auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Step 2: visited array
        vector<bool> vis(n, false);

        int count = 0;

        // Step 3: traverse all nodes
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, adj, vis);
                count++;  // new component
            }
        }

        return count;
    }
};