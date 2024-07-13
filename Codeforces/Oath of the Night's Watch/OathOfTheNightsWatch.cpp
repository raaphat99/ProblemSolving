#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    for (int i=1; i<n-1; i++)
    {
        if (arr[0]<arr[i] && arr[n-1]>arr[i])
            cnt++;
    }
    cout << cnt;
    return 0;
}
