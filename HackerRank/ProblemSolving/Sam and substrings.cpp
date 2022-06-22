#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
const unsigned int MOD = 1000000007;

int substrings(string n) {
    int lengthStr = n.size();
    
    long long int res = 0;
    long long int multiple = 1;
    for(int i=lengthStr-1; i>=0; i--) {
        res = (res + (n[i] - '0')*(i+1)*multiple)%MOD;
        multiple = (multiple*10+1)%MOD;
    }
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n;
    getline(cin, n);

    int result = substrings(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
