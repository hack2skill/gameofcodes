#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long N, A, B, K;
        cin >> N >> A >> B >> K;
        long long a = N / A;
        long long b = N / B;
        long long c = N / (A * B / __gcd(A, B));
        if ((a + b - 2 * c) >= K)
        {
            cout << "Win\n";
        }
        else
        {
            cout << "Lose\n";
        }
    }
    return 0;
}