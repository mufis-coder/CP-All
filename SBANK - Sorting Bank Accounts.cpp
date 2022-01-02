#include <iostream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;

int main () {
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		string ak[n+1];
		for (int i=0;i<=n;i++) {
			getline(cin, ak[i]);
		}
		int size = sizeof (ak) / sizeof(ak[0]);
		sort(ak, ak + size);
		int l = 1;
		cout << endl;
		for (int i=1;i<=n;i++) {
			if (i != n && ak[i] == ak[i+1]) l++;
			else {
				cout << ak[i] << " " << l <<  endl;
				l = 1;
			}
		}
		cout << endl;
	}
	
	
	return 0;
}
