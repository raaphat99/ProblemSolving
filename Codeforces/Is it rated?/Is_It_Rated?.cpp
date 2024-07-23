#include <bits/stdc++.h>
using namespace std;

bool ArraySortedDescOrNot(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        if (arr[i]<arr[i+1]) return false;
    }
    return true;
}

int main()
{
    int n, cnt=0;
    bool t;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr1[i] >> arr2[i];
        if (arr1[i]==arr2[i]) cnt++;
    }
    t = ArraySortedDescOrNot(arr1, n);
    if (cnt==n && t==true) cout << "maybe";
    else if (cnt==n && t!=true) cout << "unrated";
    else cout << "rated";
    return 0;
}
