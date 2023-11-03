#include <iostream>

using namespace std;

class Solution {
public:
    bool isPrime(int num){
        for(int i=2; i*i<=num; i++){
            if(num%i == 0) return false;
        }
        return true;
    }
    int countPrimes(int n) {
        if(n<=2) return 0;

        bool isPrime[n+1];
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i=2; i<n; i++) isPrime[i] = true;

        for(int i=2; i<n; i++){
            if(i*i>n) break;
            for(int j=i*i; j<n; j += i){
                isPrime[j] = false;
            }
        }

        int count=0;
        for(int i=2; i<n; i++){
            if(isPrime[i]) count++;
        }

        return count;
    }
};