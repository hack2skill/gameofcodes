#include <bits/stdc++.h>
using namespace std;

unsigned long long gcd(unsigned long long int x, unsigned long long int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
unsigned long long lcm(unsigned long long int x, unsigned long long int y)
{
    return (x / gcd(x, y)) * y;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n, a, b, k, c, d, ans;
        cin >> n >> a >> b >> k;
        c = (n / a) + (n / b);
        d = n / lcm(a, b);
        ans = c - (2 * d);
        if (ans >= k)
        {
            cout << "Win" << endl;
        }
        else
            cout << "Lose" << endl;
    }
    return 0;
}
