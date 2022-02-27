#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int low, int high){
    string a="",b="";
    for (int i = low; i <= high; ++i){
        a+=str[i];
    }
    b=a;
    reverse(b.begin(),b.end());
    if(a==b){
        return true;
    }
    else{
        return false;
    }
}
void longestPalSubstr(string str){
    int n = str.size();
    int maxLength = 1, start = 0;
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 1;
            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;
            if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
    int low=start,high=start + maxLength - 1;
    int depth=0;
    while(isPalindrome(str,low,high) && high!=0){
        depth++;
        high=high/2;
    }
    cout<<depth<<endl;
    for (int i = low; i <= high; ++i)
        cout << str[i];
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    longestPalSubstr(s);
    return 0;
}