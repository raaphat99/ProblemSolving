#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[2], sum;
    string str1, str2;
    bool flag=0;
    cin >> str1 >> str2;
    for (int i=0; i<str1.length(); i++) {
            char ch1, ch2;
            ch1 = tolower(str1[i]);
            ch2 = tolower(str2[i]);
        if (ch1!=ch2) {
                flag=1;
            if (ch1<ch2) cout << -1;
            else if (ch1>ch2) cout << 1;
            break;
        }
    }
    if (flag==0) cout << 0;

    return 0;
}
