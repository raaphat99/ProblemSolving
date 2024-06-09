#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, polMan=0, crimes=0;
    cin >> n;

    while (n--) {
        cin >> x;

        if (x>0) polMan+=x;
        else
        {
            if (polMan>=1) polMan--;
            else crimes++;
        }
    }
    cout << crimes;

    return 0;
}
