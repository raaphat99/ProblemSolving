#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, counter=0;
    string str;
    cin >> n >> str;
    for (int i=0; i<n; i++) {
        if (str[i+1] == str[i]) counter++;
    }
    cout << counter;
  
    return 0;
}
