#include<bits/stdc++.h>

using namespace std;

#define ll long long int

const ll mod = 1e9+7;

bool palindrome (string s,int r){

		int i = 0, j = r-1;

	

	while(i<j){

		if(s[i]!=s[j]) return false;

		i++;

		j--;

	}

	

	return true;

	

}

int depth(string s,int r){

	

	if(r%2==1) return 0;

	

	if(palindrome (s,r)){

		

		return 1 + depth(s,r/2);

		

	}

	

	return 0;

}

void solve(){

    

        ll n; cin>>n;

        

        string s; cin>>s;

        

        cout<<depth(s,n);

}

int main()

{

    ios_base::sync_with_stdio(0);

    cin.tie(0); 

    cout.tie(0);

    

    

    int t=1;

    //cin>>t;

    

    while(t--) solve();

    

    return 0;

}
