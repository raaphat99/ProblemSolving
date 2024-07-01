#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int numbers, k=0;
    cin >> s;

    numbers = ((s.size()-1)/2)+1; //number of digits in the string.
    int arr[numbers];

    for (int i=0; i<s.size(); i++)
    {
        if (s[i]== '1' || s[i]== '2' || s[i]== '3')
        {
            arr[k] = s[i];
            k++;
        }
    }
    sort(arr, arr+numbers);

    for (int i=0; i<numbers; i++)
    {
        if (i == numbers-1) cout << arr[i]-'0';
        else cout << arr[i]-'0' << "+";
    }

    return 0;
}
