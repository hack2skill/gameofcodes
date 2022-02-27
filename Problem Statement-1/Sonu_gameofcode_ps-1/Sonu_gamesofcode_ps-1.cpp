#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    
    long long int n,a,b,k,ans,temp1,temp2,temp3,t,lcm;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>k;
        temp1=n/a;
        temp2=n/b;
        lcm=(a*b)/gcd(a,b);
        temp3=n/lcm;
        ans=temp1+temp2-2*temp3;
        if(ans>=k) cout<<"Win"<<"\n";
        else cout<<"Lose"<<"\n";
    }
    return 0;
}