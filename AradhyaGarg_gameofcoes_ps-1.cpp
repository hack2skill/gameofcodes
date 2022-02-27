#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n,a,b,k;
        cin >>n>>a>>b>>k;
        
        int countAvni=0;
        int countAnuj=0;
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
           cout <<countAvni+countAnuj<<" ";
           cout << "Win"<<endl;
       }
       else
       {
           cout <<"Lose"<<endl;
       }
    }
}
