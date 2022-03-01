#include <bits/stdc++.h> 
using namespace std; 
#define nl "\n"  
#define ll long long   
#define ull unsigned long long  
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);     
const ull mod = 1e9+7; 

int main(){
     
   fast;
   int t;
   cin >> t;
   while(t--)
   {
       int n,a,b,k;
       cin >> n >> a >> b >> k;
       int avni = 0;
       int anuj = 0;
       for(int i=0; i<n; i++)
       {
           int extra;
           cin >> extra;
           if(extra%a==0 && extra%b!=0)
           {
               avni++;
           }
           else if(extra%a!=0 and extra%b==0)
           {
               anuj++;
           }
       }

       int total = avni+anuj;
       if(total >= k)
       {
           cout << "Win" << nl;
       }
       else
       {
           cout << "Lose" << nl;
       }

       cout << nl;
   }
   return 0;

}  
