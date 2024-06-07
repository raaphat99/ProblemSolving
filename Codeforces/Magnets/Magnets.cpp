#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, counter=1;
   string input, str="";
   cin >> t;
   while (t--) {
    cin >> input;
    str += input;
   }
   for (int i=0; i<str.length(); i++) {
    if (str[i+1] == str[i]) counter++;
   }
   cout << counter;

    return 0;
}
