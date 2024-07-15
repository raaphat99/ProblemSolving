#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; string s;
    set <int> x;
    cin >> n >> s;

    if(n<26) {
        cout << "NO";
        exit(0);
    }
    
    for (int i=0; i<n; i++) {
        char temp = tolower(s[i]);
        x.insert(temp);
    }
    
    if (x.size()==26) cout << "YES";
    else cout << "NO";
  
    return 0;
}
