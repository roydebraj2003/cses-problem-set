#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int i = 0;
    int j = 0;
    int count = 0;
    int max_count = 0;
 
    while(j < s.length()) {
        if(s[i] == s[j]) {
            j++;
            count++;
        } else {
            i = j;
            count = 0;
        }
        max_count = max(count, max_count);
    }
    cout<<max_count;
 
    return 0;
}

