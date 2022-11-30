#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n],b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(a,a + n);
    sort(b,b + n);
    for(int i = 0; i < k; i++){
        a[0] = b [n - 1];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    cout << sum << endl;

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
