// https://codeforces.com/problemset/problem/706/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

float calculateTime(int a, int b,int posx, int posy, int speed){
    float time = (float)( sqrt((posx-a)*(posx - a)+ (posy - b)*(posy - b)))/speed;
    return time;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,n;
    cin >> a >> b;
    cin >> n;

    vector< pair<int,int > > pos;
    int speed[n];
    float time[n];

    int temp1, temp2 ;
    for(int i = 0; i < n; i++){
        cin >> temp1 >> temp2 >> speed[i];
        pos.push_back( make_pair(temp1 ,temp2) );
    }
    // calculate time
    for(int i = 0; i < n; i++){
        time[i] = calculateTime(a, b,pos[i].first, pos[i].second, speed[i]);
    }
    sort(time, time+n);
    printf("%.10lf\n", time[0]);

}
