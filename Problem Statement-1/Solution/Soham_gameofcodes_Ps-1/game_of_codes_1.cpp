#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b >> k;
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % a == 0 && i % b != 0)
                c++;
            else if (i % b == 0 && i % a != 0)
                c++;
            else if (i % b == 0 && i % a == 0)
                continue;
        }
        if (c >= k)
            cout << "Win" << endl;
        else
            cout << "Lose" << endl;
    }
    return 0;
}