#include <bits/stdc++.h> 

using namespace std;

int solve(int harga[], int K) {
	int uang[K+1] = {};
	uang[0] = 0;
	for (int i=1;i<=K;i++) {
		int mini = INT_MAX;
		for(int j=1;j<=i;j++) {
			if (harga[j] != -1 && uang[i-j] != INT_MAX) {
				int cost = harga[j] + uang[i-j];
				if (cost<mini) mini = cost;
			}
		}
		uang[i] = mini;
	}
	return uang[K];
}

int main() {
	int casex;
	cin >> casex;
	while(casex--) {
		int N, K;
		cin >> N >> K;
		int harga[K+1];
		for(int i=1;i<=K;i++) cin >> harga[i];
		int hasil = solve(harga, K);
		if (hasil != INT_MAX) {
			cout << hasil << endl;
		}
		else cout << "-1" << endl;
	}
	
	
	return 0;
}
