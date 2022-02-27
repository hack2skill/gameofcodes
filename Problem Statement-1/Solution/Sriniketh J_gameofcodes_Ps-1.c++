#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, k, c = 0;
        cin >> n >> a >> b >> k;

        for (int i = 1; i < n; i ++) {
            if ((i % a == 0 or i % b == 0) and !(i % a == 0 and i % b == 0)) {
                c++;
            }
        }

        if (c >= k) {
            cout << "Win" << "\n";
        }
        else {
            cout << "Lose" << "\n";
        }
    }

    return 0;
}
