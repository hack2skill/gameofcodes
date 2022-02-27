#include <iostream>

using namespace std;

void solve()
{
    long long int n, a, b, k;
    cin >> n >> a >> b >> k;
    long long int ans = 0;

    long long int x = a * b;
    for (long long int i = 1; i <= n; ++i)
    {
        if (i % x == 0)
            continue;
        if (i % a == 0 || i % b == 0)
            ans++;
    }

    if (ans >= k)
        cout << "Win" << endl;
    else
        cout << "Lose" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
