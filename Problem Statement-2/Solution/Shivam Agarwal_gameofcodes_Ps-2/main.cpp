#include <bits/stdc++.h>
using namespace std;
#define SIZE 500000 + 1

int P[SIZE * 2];

// Transform S into new string with special characters inserted.
string convertToNewString(const string &s) {
    string newString = "@";

    for (int i = 0; i < s.size(); i++) {
        newString += "#" + s.substr(i, 1);
    }

    newString += "#$";
    return newString;
}

string longestPalindromeSubstring(const string &s) {
    string Q = convertToNewString(s);
    memset(P,0,sizeof(P));
    int c = 0, r = 0;                // current center, right limit

    for (int i = 1; i < Q.size() - 1; i++) {
        // find the corresponding letter in the palidrome subString
        int iMirror = c - (i - c);

        if(r > i) {
            P[i] = min(r - i, P[iMirror]);
        }

        // expanding around center i
        while (Q[i + 1 + P[i]] == Q[i - 1 - P[i]]){
            P[i]++;
        }

        // Update c,r in case if the palindrome centered at i expands past r,
        if (i + P[i] > r) {
            c = i;              // next center = i
            r = i + P[i];
        }
    }

    // Find the longest palindrome length in p.

    int maxPalindrome = 0;
    int centerIndex = 0;

    for (int i = 1; i < Q.size() - 1; i++) {

        if (P[i] > maxPalindrome) {
            maxPalindrome = P[i];
            centerIndex = i;
        }
    }

    //cout << maxPalindrome << "\n";
    return s.substr((centerIndex - 1 - maxPalindrome) / 2, maxPalindrome);
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    string s="";
    cin>>s;
    int cnt=0;
    string ans=longestPalindromeSubstring(s);
    while(ans.length()%2==0){
        cnt++;
        string ss="";
        for(int i=0;i<ans.length()/2;i++){ss+=ans[i];}
        ans=ss;
        ans=longestPalindromeSubstring(ans);
    }
    cout<<cnt<<endl;
    cout<<ans<<endl;
    return 0;
}
