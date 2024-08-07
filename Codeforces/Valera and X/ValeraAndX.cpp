#include <bits/stdc++.h>
using namespace std;
bool vis[300][300];
int main()
{
    int n;
    cin >> n;
    char arr[300][300], ch1, ch2;
    set <char> s;
    bool flag=0;
    int itr=n-1;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> arr[i][j];
            s.insert(arr[i][j]);
        }
    }
    ch1 = arr[0][0];
    ch2 = arr[0][1];

    if (s.size()>2 || ch1==ch2)
    {
        cout << "NO";
        exit(0);
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j) //to check the 1st diagonal.
                if (arr[i][j]!=ch1) {
                    flag=1;
                    break;
                }
                else
                    vis[i][j]=1;

            if (itr==j) //to check the 2nd diagonal.
                if (arr[i][j] != ch1) {
                    flag=1;
                    break;
                }
                else
                    vis[i][j]=1;

            if (vis[i][j]!=1) //to check the rest of elements.
            {
                if (arr[i][j]!=ch2)
                {
                    flag=1;
                    break;
                }
            }
        }
        itr--;
        if(flag) break;
    }

    flag?cout<<"NO":cout<<"YES";
    return 0;
}
