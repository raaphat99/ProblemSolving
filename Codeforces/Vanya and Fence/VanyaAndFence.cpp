#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, team1=0, team2=0, result;
    cin >> n >> h;
    
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x <= h) team1++;
        else team2++;
    }
    
    result = (team1*1) + (team2*2);
    cout << result;

    return 0;
}
