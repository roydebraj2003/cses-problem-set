#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    if(n == 1 || n == 0) {
        cout<<0;
        return 0;
    }
 
    vector<int> nums(n);
    for(int i = 0; i< n; i++ ) {
        cin>>nums[i];
    }
    long long cnt = 0;
 
    for(int i = 1; i< n; i++) {
        if(nums[i] < nums[i-1]) {
            cnt = cnt + abs(nums[i] - nums[i-1]);
            nums[i] = nums[i-1];
        }
    }
 
    cout<<cnt;
 
    return 0;
}

