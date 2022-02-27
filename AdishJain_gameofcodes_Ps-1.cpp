#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        ll n,a,b,k;
        cin >>n>>a>>b>>k;
        
        ll countAvni=0;
        ll countAnuj=0;
        for(int i=1;i<=n;i++)
        {
            //Avni
            if(i%a==0 && i%b!=0)
            {
                countAvni++;
            }
            else if(i%a!=0 && i%b==0)
            {
                countAnuj++;
            }
        }
        
       if((countAvni+countAnuj) >= k) 
       {
           cout << "Win"<<endl;
       }
       else
       {
           cout <<"Lose"<<endl;
       }
    }
}
