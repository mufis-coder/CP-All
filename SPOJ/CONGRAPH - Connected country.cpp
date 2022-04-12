#include<bits/stdc++.h> 
using namespace std; 


void DFSUtil(int v, vector<bool>&visited, vector<vector<int>>&adj) {
	visited[v] = true;
	for(int i=0; i<adj[v].size();++i) {
		int u = adj[v][i];
		if (!visited[u]) {
			DFSUtil(u, visited, adj);
		}
	}
}

long DFS(vector<vector<int>>&adj) {
	vector<bool>visited(adj.size(),false);
	long count = 0;
	for(int i=0; i<adj.size(); i++) {
		if(visited[i]==false) {
			count += 1;
			DFSUtil(i, visited, adj);
		}
		
	}
	return count;
}
int main() {
	long ver, rel;
	cin >> ver >> rel;
	vector<vector<int>>adj(ver);
	for (int i=0;i<rel;i++) {
		int sr, de;
		cin >> sr >> de;
		adj[sr].push_back(de);
		adj[de].push_back(sr);
	}
	long jumlahGroup = DFS(adj);
	cout << jumlahGroup - 1 << endl;
	
	return 0;
}
