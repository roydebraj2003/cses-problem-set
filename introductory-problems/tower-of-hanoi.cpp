#include <bits/stdc++.h>
using namespace std;
 
void hanoi(int from, int to, int aux, int n) {
    if(n == 1) {
        cout<<from<<" "<<to<<endl;
        return;
    }
 
    hanoi(from, aux, to, n-1);
    cout<<from<<" "<<to<<endl;
    hanoi(aux, to, from, n-1);
}
 
//0000 0001
 
int main() {
    long long n;
    cin>>n;
    long long exp = 1<<n;
    cout<<exp - 1<<endl;
    hanoi(1, 3, 2, n);
      
 
}

