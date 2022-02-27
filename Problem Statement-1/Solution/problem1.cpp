#include<bits/stdc++.h>

using namespace std;

#define ll long long int

const ll mod = 1e9+7;

void solve(){

    

        ll n,k,a,b;

        

        cin>>n>>a>>b>>k;

        

        ll g=__gcd(a,b);

        

        ll lcm=(a*b)/g;

        

        ll tab=n/lcm;

        

        ll ta=(n/a)-tab;

        

        ll tb=(n/b)-tab;

        

        

        

        if((ta+tb)>=k)

        {

            cout<<"Win"<<endl;

        }

        else

        {

            cout<<"Lose"<<endl;

        }

    

}

int main()

{

    ios_base::sync_with_stdio(0);

    cin.tie(0); 

    cout.tie(0);

    

    

    int t=1;

    cin>>t;

    

    while(t--) solve();

    

    return 0;

}

