#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    string ans;
    cin>>s;
    int i = 0, j = s.length()-1;
    map<char, int> map;
    for(int i = 0; i<= j; i++) {
        map[s[i]]++;
    }
    // for(auto it : map) {
    //     cout<<it.first<<"->"<<it.second;
    // }
    int odd_count = 0;
    for(auto it : map) {
        if(it.second % 2 != 0){ 
            odd_count++;
        }
    }
    if(odd_count > 1){
        cout<<"NO SOLUTION";
        return 0;
    }
    int idx = -1;
    char c;
    int ct = 0;
    for(auto it : map) {
        if(it.second % 2 == 0) {
            int freq = it.second/2;
            for(int i = 0; i< freq; i++) {
                ans.push_back(it.first);
                idx++;
            }
        } else {
            c = it.first;
            ct = it.second;
        }
    }
 
    for(int i = 0; i< ct; i++) {
        ans.push_back(c);
    }
    while(idx >= 0) {
        ans.push_back(ans[idx]);
        idx--;
    }
 
    cout<<ans;
 
 
    return 0;
 
}
