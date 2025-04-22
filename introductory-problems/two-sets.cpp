#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    long long n;
    cin>>n;
 
    long long total_sum = n * (n + 1)/2;
    if(total_sum % 2 == 0) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO";
        return 0;
    }
 
    long long mid = total_sum / 2;
    long long i = n;
    vector<long long> f1, f2;
 
    for(long long i = n; i >= 1; i--) {
        if(mid >= i) {
            f1.push_back(i);
            mid -= i;
        } else {
            f2.push_back(i);
        }
    }
    cout<<f1.size()<<endl;
    for(auto it : f1) {
        cout<<it<<" ";
    }
    cout<<endl;
     cout<<f2.size()<<endl;
    for(auto it : f2) {
        cout<<it<<" ";
    }
 
 
}

