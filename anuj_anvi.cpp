#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
int t;
cin>>t;
while(t--){
    int n;int a;int b;int k;
    cin>>n>>a>>b>>k;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(i%a==0)cnt++;
        else if(i%b==0)cnt++;
        if(i%a==0&&i%b==0)cnt--;
    }
    if(cnt>=k){cout<<cnt<<" "<<"WIN";}
    else cout<<"NOT WIN";
    cout<<endl;
}
return 0;
}