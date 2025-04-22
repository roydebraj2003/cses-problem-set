#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    long long actual_sum = 0;
    long long total_sum = n * (n + 1)/2;
    vector<int> num(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> num[i];
        actual_sum += num[i];
    }
 
    cout<<total_sum - actual_sum;
 
    return 0;
}

