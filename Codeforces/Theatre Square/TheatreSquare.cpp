#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    long long res = ceil(n/a)*ceil(m/a);
    cout << res;

    return 0;
}
