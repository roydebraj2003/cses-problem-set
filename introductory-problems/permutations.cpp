#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    if(n == 1) {
        cout<<n;
        return 0;
    }
    if(n == 3 || n == 2) {
        cout<<"NO SOLUTION";
        return 0;
    }
    
    for(int i = 2; i<= n; i++) {
        if(i % 2 == 0) {
            cout<<i<<" ";
        }
    }
    for(int i = 1; i<= n; i++) {
        if(i % 2 != 0) {
            cout<<i<<" ";
        }
    }
 
 
 
    return 0;
}

