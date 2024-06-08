#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], l=0, r=n-1, counter=0,  //l,r for left and right bounds.
                p1=0, p2=0, sum=0;      //player1 and player2.
    for (int i=0; i<n; i++)
        cin >> arr[i];
    while(l<=r)
    {
        if (arr[l]>=arr[r])
        {
            sum = arr[l];
            l++;
        }
        else
        {
            sum = arr[r];
            r--;
        }
        if (counter%2==0)
            p1 += sum;
        else
            p2 += sum;
        counter++;
    }
    cout << p1 << " " << p2 << endl;
    return 0;
}
