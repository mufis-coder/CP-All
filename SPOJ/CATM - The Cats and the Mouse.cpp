#include<bits/stdc++.h> 
using namespace std; 

struct Kordinat {
    int depan;
    int belakang;
};

bool solusi(int n, int m, Kordinat tikus, Kordinat kucing1, Kordinat kucing2) {
	int tuju[4] = {1, n, 1, m};
	for (int i = 0; i<4; i++) {
		int tujuanTikus, tujuanKucing, tujuanKucing2;
		if (i<2) {
			tujuanTikus = abs(tuju[i] - tikus.depan) + 0;
			tujuanKucing = abs(tuju[i]-kucing1.depan) + abs(tikus.belakang-kucing1.belakang);
			tujuanKucing2 = abs(tuju[i]-kucing2.depan) + abs(tikus.belakang-kucing2.belakang);
			if(tujuanTikus<tujuanKucing && tujuanTikus<tujuanKucing2) {
				return true;
			}	
		}
		else{
			tujuanTikus = 0 + abs(tuju[i] - tikus.belakang);
			tujuanKucing = abs(tikus.depan - kucing1.depan) + abs(tuju[i] - kucing1.belakang);
			tujuanKucing2 = abs(tikus.depan - kucing2.depan) + abs(tuju[i] - kucing2.belakang);
			if(tujuanTikus<tujuanKucing && tujuanTikus<tujuanKucing2) {
				return true;
			}	
		}
	}
	return false;
}


int main() {
	int n, m;
	int k;
	cin >> n >> m;
	cin >> k;
	for (int i=0; i<k; i++) {
		Kordinat mouse, cat1, cat2;
		int mx, my, c1x, c1y, c2x, c2y;
		cin >> mx >> my >> c1x >> c1y >> c2x >> c2y;
		mouse.depan = mx; mouse.belakang = my;
		cat1.depan = c1x; cat1.belakang = c1y;
		cat2.depan = c2x; cat2.belakang = c2y;
		if (solusi(n, m, mouse, cat1, cat2))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
