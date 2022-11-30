#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int ans = 0;
    int abcount = 0;
    int bacount = 0;

    for(int i =0; i < s.length() - 1; i++){
        if(s[i] == 'A' && s[i+1] =='B'){
            abcount++;
        }
        if(s[i] == 'B' && s[i+1] == 'A'){
            bacount++;
        }
    }
    bool checked = false;
    if(abcount == bacount){
        if(abcount == 0) checked = false;
        else checked = true;
    }else checked = true;

    // check for ABA
    if(checked){
        for(int i =0; i < s.length() - 2; i++){
            if(s[i] == 'A'){
                if(s[i+1] == 'B'){
                    if(s[i+2] == 'A'){
                        ans++;
                        break;
                    }
                }
            }
        }
        if(ans > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }else cout << "NO\n";
    // ABABAB

    
}
