#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, years=0;
    cin >> x >> y;
    while (x<=y) {
        y*=2;
        x*=3;
        years++;
    }
    cout << years << endl;

    return 0;
}
