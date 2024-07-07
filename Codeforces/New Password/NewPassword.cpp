#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x=97, cnt=0;
    char ch[26];
    cin >> n >> k;

    for (int i=0; i<26; i++)
    {
        ch[i]= x;
        x++;
    }
    bool flag=0;
    for (int i=0; i<n; i++)
    {
        if (cnt==k)
        {
            if (flag==0)
            {
                cout << "a";
                flag=1;
            }
            else
            {
                cout << "b";
                flag=0;
            }
        }
        else
        {
            cout << ch[i];
            cnt++;
        }
    }

    return 0;
}
