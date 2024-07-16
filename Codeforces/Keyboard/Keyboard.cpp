#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    string s, res="", x="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> ch >> s;


    if (ch=='R')
    {
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]!='q' && s[i]!='a' && s[i]!='z')
            {
               res+= x[x.find(s[i])-1];
            }
        }
    }
    else
    {
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]!='p' && s[i]!=';' && s[i]!='/')
            {
                res+= x[x.find(s[i])+1];
            }
        }
    }
    cout << res;

    return 0;
}
