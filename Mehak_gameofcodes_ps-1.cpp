#include<iostream>
using namespace std;

int main()
{
    int a,b,n,k,t,countavni,countanuj;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        cin>>a;
        cin>>b;
        cin>>k;
        for(int j=0;j<=n;j++)
        {
            if (n%a==0 && n%b!=0)
            {
                countavni++;
            }
            
        }
        for(int m=0;m<=n;m++)
        {
            if (n%a!=0 && n%b==0)
            {
               countanuj++;
            }
        }
        
        int solved=countavni+countanuj;
        if (solved>=k)
        {
            cout<<"Win";
        }
       else
       {
           cout<<"Lose";
       }
    }    
}