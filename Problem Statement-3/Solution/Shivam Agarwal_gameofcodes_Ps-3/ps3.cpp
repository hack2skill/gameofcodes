#include <bits/stdc++.h>

using namespace std;
int coprime(int a, int b)
{
    while (__gcd(a, b) != 1) {
        a = a / __gcd(a, b);
    }
    return a;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
        cout<<coprime(a,b)<<endl;
    }
    return 0;
}
