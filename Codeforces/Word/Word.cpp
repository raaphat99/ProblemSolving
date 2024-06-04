#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int capital=0, small=0;
    cin >> str;

    for (int i=0; i<str.length(); i++)
    {
        if (str[i]>=65 && str[i]<=90) capital++;
        else if (str[i]>=97 && str[i]<=122) small++;
    }
   if (capital>small)
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    else
        transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str;

    return 0;
}
