#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {

        visited[node] = true;

        for (int nei : adj[node]) {

            if (!visited[nei]) {

                dfs(nei, adj, visited);

            }

        }

    }

int main(){
    return 0;
}