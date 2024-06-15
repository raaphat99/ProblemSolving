#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4], counter=0;
    for (int i=0; i<4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+4);
    for (int i=0; i<4-1; i++)
    {
        if (arr[i+1]==arr[i]) counter++;
    }
    cout << counter;

    return 0;
}
