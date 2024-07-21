#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    set <int> s;
    cin >> n >> x;
    int arr1[x];
    for (int i=0; i<x; i++)
    {
        cin >> arr1[i];
        s.insert(arr1[i]);
    }
    cin >> y;
    int arr2[y];
    for (int i=0; i<y; i++)
    {
        cin >> arr2[i];
        s.insert(arr2[i]);
    }

    if (s.size()==n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
  
    return 0;
}
