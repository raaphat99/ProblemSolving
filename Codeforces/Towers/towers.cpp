#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
int freq[MAX];

int main() {

    int x;
    cin >> x;

    int arr[x];
    for (int i=0; i<x; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int max=freq[0], cnt=0;
    for (int i=0; i<MAX; i++) {
        if (freq[i]) {
            if (freq[i] > max) {
                max = freq[i];
            }
            cnt++;
        }
    }

    cout << max << " " << cnt << "\n";

    return 0;
}
