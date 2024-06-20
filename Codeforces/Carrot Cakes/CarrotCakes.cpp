#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, t, k, d, t1, t2, cyclesNeeded, cyclesDone=0, oven1=0, oven2=0;
    cin >> n >> t >> k >> d;

    cyclesNeeded = ceil(double(n)/double(k));

    // cout << "needed cycles = " << cyclesNeeded << "\n";

    // Time needed in case of one oven exists
    t1 = cyclesNeeded * t;
    t2 = d;

    // Time needed in case of two ovens exist
    while (cyclesDone < cyclesNeeded) {
        // Number of cycles done in both ovens
        oven1 = t2/t;
        cyclesDone = oven1+oven2;
        if (cyclesDone < cyclesNeeded) {
            t2+=t;
            oven2++;
        }
    }

    if (t2 < t1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
