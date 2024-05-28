#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter, question=0;
    cin >> n;
    int arr[n][3];
    for (int i=0; i<n; i++) {
            counter=0;
        for (int j=0; j<3; j++) {
            cin >> arr[i][j];
            if (arr[i][j]==1) counter++;
        }
        if (counter>=2) question++;
    }
    cout << question << endl;


    return 0;
}
