#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d, counter=0, sum=0;
    cin >> n >> b >> d;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        if (arr[i]<=b)
        {
            sum+= arr[i];
        }
        if (sum>d) {
            counter++;
            sum=0;
        }
    }
    cout << counter;

    return 0;
}
