#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count1=0, count2=0;
    string str;
    cin >> n >> str;
    for (int i=0; i<str.length(); i++)
    {
        if (str[i]=='A') count1++;
        else if (str[i]=='D') count2++;
    }
    if (count1>count2) cout << "Anton" << endl;
    else if (count2>count1) cout << "Danik" << endl;
    else cout << "Friendship" << endl;


    return 0;
}
