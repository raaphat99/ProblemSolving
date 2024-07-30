#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c1=0, c2=0;
    string str, tmp1, tmp2;
    cin >> n >> str;
    tmp1 = str;
    c1++;

    for (int i=0; i<n-1; i++)
    {
        cin >> str;
        if (str==tmp1)
            c1++;
        else
        {
            c2++;
            tmp2 = str;
        }
    }
    if (c1>c2) cout << tmp1;
    else cout << tmp2;
    return 0;
}
