#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int count=0;
        int n,a,b,k;
        cin>>n>>a>>b>>k;
        for(int i=1;i<=n;++i){
            if(i%a==0 && i%b!=0)++count;
            else if(i%a!=0 && i%b==0)++count;
        }
        if(count>=k)cout<<"Win"<<endl;
        else cout<<"Lose"<<endl;
    }
    return 0;
}