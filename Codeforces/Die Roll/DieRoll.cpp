#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, maxNum;
    cin >> x >> y;
    maxNum = max(x, y);

    if (maxNum==1) cout << "1/1";
    else if (maxNum==2) cout << "5/6";
    else if (maxNum==3) cout << "2/3";
    else if (maxNum==4) cout << "1/2";
    else if (maxNum==5) cout << "1/3";
    else if (maxNum==6) cout << "1/6";

    return 0;
}
