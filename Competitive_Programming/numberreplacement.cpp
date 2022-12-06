#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;
    int a[n];
    string word;
    vector<pair<int,int> > positions;

    cin >> n;
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
    cin >> word;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] == a[j] && i != j) {
                // cout << "{" << i << "," << j << "}";
                positions.push_back(make_pair(i,j));
            }   
        }
    }
    bool ans;
    for(int i = 0; i< positions.size(); i++){
        if(word[positions[i].first] == word[positions[i].second] ){
            ans = true;
        }else {
            ans = false;
            break;

        }
    }

    cout << (ans ? "YES\n" : "NO\n");


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
}
