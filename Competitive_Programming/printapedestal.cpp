#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int h2,h1,h3;
    h3 = 1;
    h2 = 2;
    h1 = n - 3;
    while(h1 > h2 && h2 > h3){
        h3++;
        h2++;
        h1 = h1 - 2;
    }
    cout << h2 << h1 << h3 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
