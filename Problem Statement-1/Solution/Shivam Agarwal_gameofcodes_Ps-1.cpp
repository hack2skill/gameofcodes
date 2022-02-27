#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,k,c=0;
        for(int i=1;i<=n;i++){
            if(i%a==0 && i%b!=0)
                c++;
            else if(i%a!=0 && i%b==0)
                c++;
        }
        if(c>=k)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    }
    return 0;
}