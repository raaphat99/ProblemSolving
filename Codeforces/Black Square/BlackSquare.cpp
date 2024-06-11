#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4], sum=0;
    string str;
    for (int i=0; i<4; i++) {
        cin >> arr[i];
    }
    cin >> str;
    for (int i=0; i<str.size(); i++) {
        if (str[i]=='1') sum += arr[0];
        else if (str[i]=='2') sum += arr[1];
        else if (str[i]=='3') sum += arr[2];
        else if (str[i]=='4') sum += arr[3];
    }
    cout << sum;

    return 0;
}
