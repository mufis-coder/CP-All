#include<bits/stdc++.h>  
using namespace std;

int max (int a, int b) {
	return (a>b) ? a:b;
}

int solve(char *NLett, char *MLett, int n, int m, int *value) {
	int save[n+1][m+1];
	
	for (int i=0;i<=n;i++) {
		for (int j=0;j<=m;j++) {
			if (i==0||j==0) {
				save[i][j] = 0;
			}
			else if (NLett[i-1] == MLett[j-1]) {
				save[i][j] = save[i-1][j-1] + value[int(NLett[i-1])-97];
			}
			else {
				save[i][j] = max(save[i-1][j], save[i][j-1]);
			}
		}
	}
	return save[n][m];
}


int main(){
	int N, M;
	int LetVal[26];
	cin >> N >> M;
	for (int i=0;i<26;i++) cin >> LetVal[i];
	char NLet[N], MLet[M];
	for (int i=0;i<N;i++) cin >> NLet[i];
	for (int i=0;i<M;i++) cin >> MLet[i];
	
	cout << solve(NLet, MLet, N, M, LetVal) << endl;
	return 0;
}
