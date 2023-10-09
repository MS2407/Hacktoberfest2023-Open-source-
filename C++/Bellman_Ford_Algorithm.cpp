vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        vector<int> dis(V,100000000);
        dis[S] = 0;
        
        //loop from 1 to V-1 for all Edges
        for(int i=1;i<V;i++){
                for(auto k : adj){
                    //k is [node1,node2,dis]
                    int u = k[0];
                    int v = k[1];
                    int w = k[2];
                    // going from node u to v with weight w
                    if((dis[u] + w)< dis[v]){
                        dis[v] = dis[u] + w;
                    }
                }
            
        }
        
        return dis;
    }
