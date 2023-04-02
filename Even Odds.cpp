#include <iostream>

using namespace std;

long long getResult(long long n, long long k, long long mid)
{
    long long out;
    if (k <= mid)
        // first half
        out = (2 * (k-1)) + 1;
    else
        // second half
        out = 2 * (k - mid);
    return out;
}

int main()
{
    long long n, k, out, middle;
    cin >> n >> k;
    if (n % 2 == 0)
        // even
        middle = n/2;
    else
        // odd
        middle = (n/2)+1;
    cout << getResult(n, k, middle);

    return 0;
}
