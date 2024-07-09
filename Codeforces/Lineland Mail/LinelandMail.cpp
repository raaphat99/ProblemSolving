#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++)
    {
        int mini=0, maxi=0, x=0, y=0;
        if (i==0)
        {
            mini = abs(arr[i]-arr[i+1]);
            maxi = abs(arr[i]-arr[n-1]);
            cout << mini << " " << maxi << endl;
        }
        else if (i==n-1)
        {
            mini = abs(arr[i]-arr[i-1]);
            maxi = abs(arr[i]-arr[0]);
            cout << mini << " " << maxi << endl;
        }
        else
        {
            x = abs(arr[i]-arr[i-1]);
            y = abs(arr[i]-arr[i+1]);
            mini = min(x, y);
            x = abs(arr[i]-arr[n-1]);
            y = abs(arr[i]-arr[0]);
            maxi = max(x, y);
            cout << mini << " " << maxi << endl;
        }
    }
    return 0;
}
