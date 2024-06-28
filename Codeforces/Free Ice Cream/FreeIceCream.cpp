#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter=0; long long sum;
    cin >> n >> sum;
    char ch[n];
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> ch[i] >> arr[i];
    }
    for (int i=0; i<n; i++)
    {
        if (ch[i]=='+')
        {
            sum+=arr[i];
        }
        else
        {
            if (arr[i]<=sum) sum-=arr[i];
            else counter++;
        }
    }
    cout << sum << " " << counter;
    return 0;
}
