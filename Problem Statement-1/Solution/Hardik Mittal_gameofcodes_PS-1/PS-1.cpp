#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>

#define ll long long
#define vl vector <ll>
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define FL(i,a,b) for (int i = a; i < b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair

//typedef long long ll;
using namespace std;
#define MOD 1000000007

void solve()
{
    ll i,n,a,b,k;
    cin>>n>>a>>b>>k;

    ll c=0;

    for(i=1;i<=n;i++)
    {
        if(i%a==0&&i%b!=0)
            c++;
        else if(i%a!=0&&i%b==0)
            c++;
    }

    if(c>=k)
    {
        cout<<"Win"<<endl;
    }
    else
    {
        cout<<"Lose"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
