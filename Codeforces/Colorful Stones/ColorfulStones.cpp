#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, ins; //for instructions.
    int ptr=0;
    cin >> str >> ins;
    for (int i=0; i<ins.size(); i++)
    {
        if (ins[i]==str[ptr]) ptr++;
    }
    cout << ptr+1;

    return 0;
}
