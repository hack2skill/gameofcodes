#include<bits/stdc++.h>

using namespace std;

#define ll long long int

const ll mod = 1e9+7;

vector<ll > v;

void seive(ll n)

{

	bool prime[n+1];	memset(prime, true, sizeof(prime));

	for (ll p=2; p*p<=n; p++)

	{

		if (prime[p] == true)

		{

			for (ll i=p*p; i<=n; i += p)

				prime[i] = false;

		}

	}

	

	

	for (ll p=2; p<=n; p++){

	     if (prime[p]) {

	       	v.push_back(p);

	     }

	}

}

void solve(){

    

        ll m,x,j,i,y;

         

        i=5;

        x=5;

        j=2;

        y=7;

        

        cin>>m;

        

        vector<ll > arr;

        arr.push_back(66);

        arr.push_back(55);

        

        

        while(j<m)

        {

            if(i%2!=0)

            {

                arr.push_back(v[i]*x);j+=2;

                arr.push_back(v[i]*y);

            }

            else if(i%2==0)

            {

                arr.push_back(v[i]*y);

                arr.push_back(v[i]*x);  j+=2;

            }

            i++;

        }

        

        

        if(m%2)

        {

        	

            arr.pop_back();

       

        }

        

        arr.back()*=2;

        

        for(auto i:arr)

            cout<<i<<" ";

        

        cout<<endl;

}

int main()

{

    ios_base::sync_with_stdio(0);

    cin.tie(0); 

    cout.tie(0);

    

    seive(1000000);

    

    int t=1;

    cin>>t;

    

    while(t--) solve();

    

    return 0;

}
