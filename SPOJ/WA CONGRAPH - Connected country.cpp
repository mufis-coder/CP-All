#include <bits/stdc++.h> 
using namespace std; 

class Edge {
	
	public:
	long src, dest;
};

class Graph {
	
	public:
	
	long V, E;
	
	Edge* edge;
};

Graph* createGraph(long V, long E) { 
	Graph* graph = new Graph(); 
	graph->V = V; 
	graph->E = E; 

	graph->edge = new Edge[graph->E * sizeof(Edge)]; 

	return graph; 
} 

long find(long parent[], long i) {
	int j = 0;
	while(1) {
		j ++;
		if (parent[i] == -1)
			return i;
		i = parent[i];
		if (j==2) {
			return i;
		}
	}
}


int main() {
	long ver, rel;
	cin >> ver >> rel;
	long V = ver, E = rel; 
	Graph* graph = createGraph(V, E); 
	
	long *parent = new long[graph->V * sizeof(long)];
	memset(parent, -1, sizeof(long) * graph->V);
	for (int i=0;i<rel;i++) {
		long sr, de;
		cin >> sr >> de;
		graph->edge[i].src = sr;
		graph->edge[i].dest = de;
		
		long x = find(parent, graph->edge[i].src); 
		long y = find(parent, graph->edge[i].dest);
		if (x != y) {
			parent[y] = x;
		}
	}
	
	long cg = 0;
	for(long i = 0; i < graph->V; ++i) {
//		printf("parent %d i %d\n", parent[i], i);
		if (parent[i]==-1)
			cg++;
	}
	
	cout << cg - 1 << endl;
	
	return 0;
}
