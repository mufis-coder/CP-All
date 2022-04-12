#include <bits/stdc++.h> 

#define ARR_SIZE 100
using namespace std; 

void solve(int n, int i, int arr_in[], int k, int *mini) {
	static int arr[ARR_SIZE];
	
	if(n==0) {
		int harga = 0;
		for(int j=0;j<i;j++) {
			harga += arr_in[arr[j]-1];
			if (harga>=*mini) break;
		}
		if (*mini>harga) {
			*mini = harga;
		}
	}
	else if(n>0) {
		for(int j=1; j<=k; j++) {
			if (arr_in[j-1] != -1) {
				arr[i]= j; 
				solve(n-j, i+1, arr_in, k, mini);
			}
		}
	}
}

int main() {
	int casex;
	cin >> casex;
	while(casex--) {
		int N, K;
		cin >> N >> K;
		int harga[K];
		for(int i=1;i<=K;i++) {
			int mas;
			cin >> mas;
			harga[i-1] = mas;
		}
		int masuk = INT_MAX;
		solve(K, 0, harga, K, &masuk);
		if (masuk == INT_MAX) {
			masuk = -1;
		}
		cout << masuk << endl;
	}
	
	return 0;
}
