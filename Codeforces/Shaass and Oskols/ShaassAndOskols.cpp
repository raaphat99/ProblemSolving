#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, shots;
    cin >> n;
    int arr[n];
  
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cin >> shots;
  
    int w[shots], o[shots];
    for (int i=0; i<shots; i++)
        cin >> w[i] >> o[i];

    for (int i=0; i<shots; i++)
    {
        int temp = w[i]-1;
        if (temp>0) arr[temp-1]+= abs(1-o[i]); //the birds on the i-th wire to the left side
        if (temp<n-1) arr[temp+1]+= arr[temp]-o[i]; //the birds on the i-th wire to the right side
        arr[temp]=0; //the wire that shot.
    }

    for (int i=0; i<n; i++)
        cout << arr[i] << endl;

    return 0;
}
