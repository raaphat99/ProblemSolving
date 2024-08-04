#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i=0; i<s.size(); i++) //to replace "WUB" with a single space.
        if (s.substr(i,3)=="WUB")
        {
            s.erase(s.begin()+i, s.begin()+i+3);
            s.insert(s.begin()+i,' ');
        }

    for (int i=0; i<s.size(); i++) //to earse the spaces between the words.
        if (s[i]==' '&&(i==s.size()||s[i+1]==' '))
            s.erase(s.begin()+i);

    if (s[0]==' ') //to erase the remainder spaces at the beginning of the string.
    s.erase(s.begin());

    cout << s;
    return 0;
}
