 
#include <bits/stdc++.h> 
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7; 
 
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
 
int cpFact(int x, int y)
{
    while (gcd(x, y) != 1) {
        x = x / gcd(x, y);
    }
    return x;
}


int main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        cout << cpFact(x, y) << nl;

    }

    cout << nl;
    return 0;
}
