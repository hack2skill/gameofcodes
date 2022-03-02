#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        long long a = 2 * 3;
        long long b = 3 * 5;
        long long c = 5 * 2;
        if (N % 3 == 0)
        {
            for (long long i = 0; i < N / 3; i++)
            {
                cout << a << " " << b << " " << c << " ";
            }
        }
        else if (N % 3 == 1)
        {
            cout << 2 * 7 << " " << 7 * 5 << " " << 5 * 13 << " " << 13 * 2 << " ";
            for (long long i = 0; i < (N - 1) / 3; i++)
            {
                cout << a << " " << b << " " << c << " ";
            }
        }
        else
        {
            cout << 2 * 7 << " " << 7 * 5 << " " << 5 * 3 << " " << 3 * 13 << " " << 13 * 2 << " ";
            for (long long i = 0; i < (N - 2) / 3; i++)
            {
                cout << a << " " << b << " " << c << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}