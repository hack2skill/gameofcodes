#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007 

void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
}

int main(){
	file_i_o();
	
	int t;
	cin>>t;
	while(t--){
		int n,a,b,k;
		cin>>n>>a>>b>>k;
		int count1=0;
		int count2=0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(num%a==0 && num%b!=0){
				count1++;
			}
			if(num%a!=0 && num%b==0){
				count2++;
			}
		}
		if(count1+count>=k){
			cout<<"Win";
		}else{
			cout<<"Lose";
		}
		cout<<endl;
	}
	
    return 0;
}