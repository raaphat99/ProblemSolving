#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int sum=0, test, ini=0; //for the initial rotation.

    cin >> str;
    ini = abs('a' - str[0]);

    if (ini > 13) ini = 26-ini; //13 is half the number of English letters.
    sum += ini;

    for (int i=0; i<str.size()-1; i++)
    {
        test = abs(str[i]-str[i+1]);
        if (test>13) test = 26-test;
        sum+=test;
    }

    cout << sum;

    return 0;
}
