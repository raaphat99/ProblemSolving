#include <bits/stdc++.h>

using namespace std;

int main()
{
   string str;
   cin >> str;
   int l = str.length(), arr[l], counter=0;
   for (int i=0; i<l; i++) {
     arr[i] = str[i];
   }
    sort(arr, arr+l);
    for (int i=0; i<l; i++) {
     if (arr[i+1]!=arr[i]) counter++;
   }
   if (counter%2==0) cout << "CHAT WITH HER!";
   else cout << "IGNORE HIM!";

    return 0;
}
