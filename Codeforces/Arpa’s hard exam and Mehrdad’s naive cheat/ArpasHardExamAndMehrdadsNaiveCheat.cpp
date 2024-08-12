#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[4] = {6, 8, 4, 2};
    cin >> n;
    if (n==0) cout << 1;
    else cout << arr[n%4];
    return 0;
}
