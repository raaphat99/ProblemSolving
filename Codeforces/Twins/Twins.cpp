#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, nMoney, tMoney=0; //neddedMoney - tMoney
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        sum+= arr[i];
    }
    sort(arr, arr+n, greater<int>());

    if (sum%2==0) nMoney = (sum/2)+1;
    else nMoney = (sum+1)/2;

    int i=0;
    while (tMoney<nMoney) {
        tMoney+= arr[i];
        i++;
    }
    cout << i;

    return 0;
}
