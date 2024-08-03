#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y; bool flag=0;
    cin >> x >> y;
    string arr[x][y];

    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j]=="C" || arr[i][j]=="M" || arr[i][j]=="Y")
                flag=1;
        }
    }
    if (flag) cout << "#Color";
    else cout << "#Black&White";
    return 0;
}
