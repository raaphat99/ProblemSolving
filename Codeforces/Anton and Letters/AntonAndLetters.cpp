#include <bits/stdc++.h>
using namespace std;

int main()
{
    int totLtrs;
    vector<int> v;
    string str;
    getline(cin, str);

    if (str.size()==2)
    {
        cout << 0;
        exit(0);
    }

    totLtrs = ((str.size()-2-1)/3)+1; //total letters in the string.

    for (int i=0; i<str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            v.push_back(str[i]);
        }
    }
    sort(v.begin(), v.end());

    for (int i=0; i<v.size()-1; i++)
    {
        if (v[i+1] == v[i]) totLtrs--;
    }
    cout << totLtrs;

    return 0;
}
