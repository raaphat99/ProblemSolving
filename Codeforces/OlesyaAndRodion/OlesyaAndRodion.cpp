#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    bool flag=0;
    cin >> x >> y;
    if (x==1 && y==10) {
        cout << -1;
        exit(0);
    }
    if (y==10)
    {
        cout << 1;
        flag=1;
    }
    for (int i=1; i<=x; i++)
    {
        if (flag)
        {
            cout << 0;
            if (i==x-1) 
              break;
        }
        else
            cout << y;
    }
    return 0;
}
