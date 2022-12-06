#include <iostream>

using namespace std;

void solve(){
   int n; 
   string word;
   bool ans;

   cin >> n;
   cin >> word;

   for(int i = 0; i < n; i = i + 3){
       if(word[i+1] == word[i+2] ){
           ans = true;
       }else ans = false;
   }
   cout << (ans ? "YES\n" : "NO\n");
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
