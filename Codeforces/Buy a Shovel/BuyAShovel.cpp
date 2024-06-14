#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pr, r, i=1;
    cin >> pr >> r;
    while(true) {
        if ((pr*i)%10 == r || (pr*i)%10 ==0)
        {
            cout << i;
            break;
        } else {
            i++;
        }
    }

    return 0;
}
