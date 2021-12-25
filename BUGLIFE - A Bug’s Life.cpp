#include <bits/stdc++.h> 

using namespace std; 
#define V 2000
bool isBipartiteUtil(int G[][V], int src, int colorArr[], int b) 
{ 
	colorArr[src] = 1; 

	queue <int> q; 
	q.push(src); 
 
	while (!q.empty()) 
	{ 
		int u = q.front(); 
		q.pop(); 

		if (G[u][u] == 1) 
		return false; 

		for (int v = 0; v < V; ++v) 
		{ 
			if (G[u][v] && colorArr[v] == -1) 
			{ 
				colorArr[v] = 1 - colorArr[u]; 
				q.push(v); 
			} 

			else if (G[u][v] && colorArr[v] == colorArr[u]) 
				return false; 
			if (v==b-1) {
				break;
			}
		} 
	} 

	return true; 
} 


bool isBipartite(int G[][V], int b) 
{ 
	int colorArr[V]; 
	for (int i = 0; i < V; ++i) {
		colorArr[i] = -1; 
		if (i==b-1) {
			break;
		}
	}
		
	for (int i = 0; i < V; i++) {
		if (colorArr[i] == -1) 
			if (isBipartiteUtil(G, i, colorArr, b) == false) 
				return false; 
		
		if (i==b-1) {
			break;
		}
	}
	

	return true; 
} 

int main() 
{ 
	
	int s;
	scanf("%d", &s);
	for (int i=1;i<=s;i++) {
		int b, inter;
		scanf("%d %d", &b, &inter);
		int G[b][V] = {{0}};
		while(inter--) {
			int b1, b2;
			scanf("%d %d", &b1, &b2);
			G[b2-1][b1-1] = 1;
			G[b1-1][b2-1] = 1;
		}
		if (isBipartite(G, b)) {
			printf("Scenario #%d:\n", i);
			printf("No suspicious bugs found!\n");
		}
		else{
			printf("Scenario #%d:\n", i);
			printf("Suspicious bugs found!\n");
		}
	}

} 

