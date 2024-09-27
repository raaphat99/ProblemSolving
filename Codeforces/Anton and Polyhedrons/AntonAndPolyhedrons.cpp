#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;
    string arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i]=="Icosahedron") sum+=20;
        else if (arr[i]=="Cube") sum+=6;
        else if (arr[i]=="Tetrahedron") sum+=4;
        else if (arr[i]=="Dodecahedron") sum+=12;
        else sum+=8;
    }
    cout << sum;
    return 0;
}
