#include <iostream>
#include<string> 
using namespace std;

string add_inStr(string str) {
	int carry = 0;
	int panjang = str.length()-1;
	for (int i = panjang; i>=0; i--) {
		if (i == panjang) {
			if (str[i] == '9') {
				str[i] = '0';
				carry = 1;
			} else {
				str[i] = str[i] + 1; 
			}
		} 
		else if ((str[i] == '9') and (carry==1)) {
			str[i] = '0';
			carry = 1;
		} else {
			str[i] = str[i] + carry;
			carry = 0;
			break;
		}
	}
	if (str[0] == '0') {
		return '1' + str;
	}	
	return str;
}

bool is_palindrome(string str) {
//	if (str[0] - '0' == 0)
//		return false;
	int panjang = str.length();
//	if (panjang%2==1)
//		panjang += 1;
	for (int i=0; i<=panjang/2-1; i++) {
		if (str[i] != str[panjang-i-1])
			return false;
	}
	return true;
}

int main() {
	int tc;
	cin >> tc; 
	while(tc--) {
		string iAngka; long long int angka;
		cin >> iAngka;
		if (iAngka.length()<8) {
			angka = stoi(iAngka);
			angka++;
			while (is_palindrome(to_string(angka)) == false) {
				angka++;
			}
			printf("%lld\n", angka);
		} else {			
			iAngka = add_inStr(iAngka);
			while (is_palindrome(iAngka) == false) {
				iAngka = add_inStr(iAngka);
			}
			printf("%s\n", iAngka.c_str());
		}
	}
	return 0;
}
