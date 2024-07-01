#include <bits/stdc++.h>
using namespace std;
int t[3];
int main()
{
    int n, counter=0;
    cin >> n;
    int arr[n];
    set <int> s;

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        if (arr[i]==1) t[0]++;
        else if (arr[i]==2) t[1]++;
        else t[2]++;
    }
    sort(t, t+3);
    if (t[0]==0)
    {
        cout << 0;
        exit(0);
    }
    else
    {
        cout << t[0] << endl;
        int w = t[0], i=0;

        while (counter<w)
        {
            int temp = s.size();
            if (arr[i]!=0)
            {
                s.insert(arr[i]);
                if (s.size()==temp+1)
                {
                    cout << i+1 << " ";
                    arr[i]=0;
                }
                if (s.size()==3)
                {
                    cout << endl;
                    s.clear();
                    counter++;
                }
            }
            if (i==n-1) i=0;
            else i++;
        }
    }
    return 0;
}
