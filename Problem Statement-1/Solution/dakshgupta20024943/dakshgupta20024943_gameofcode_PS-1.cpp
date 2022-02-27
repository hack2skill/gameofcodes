#include<bits/stdc++.h>
using namespace std;



int main(){
    int t; cin>>t;
    while (t--){

        long long int n, a, b, k;
        cin >> n >> a >> b >> k;

        long long int problemSolved=0;

        //divisible by a
        problemSolved+=n/a;

        //divisible by b
        problemSolved+=n/b;

        //divisible by a and b
        problemSolved-=2*n*__gcd(a,b)/(a*b);

        if (problemSolved>=k){
            cout<<"Win"<<endl;
        }
        else{
            cout<<"Lose"<<endl;
        }
    }

}