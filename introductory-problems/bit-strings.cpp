#include <bits/stdc++.h>
using namespace std;
 
#define MOD 1000000007
 
long long power(long long base, long long exp, long long mod){
 
    long long result = 1;
    while(exp > 0) {
        if(exp & 1) 
            result = (result * base) % mod;
        base = (base * base) % mod;
 
        exp = exp>>1;
 
    }
    return result;
}
 
int main() {
    long long n;
    cin>>n;
 
    cout<<power(2, n, MOD);
 
 
    return 0;
}

