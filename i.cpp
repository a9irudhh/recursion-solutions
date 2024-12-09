// Written by Anirudh R. H.

#include <bits/stdc++.h>
using namespace std;

///////////////////////////////////////////////--definitions and functionalities--//////////////////////////////////////////////////////////////

#define lli long long int
#define f(i, m, n) for(lli i = m; i < n; i++)
#define fr(i, m, n) for(lli i = m; i >= n; i--)
#define endl '\n'
#define inf 1e18
#define MOD 1e9+7
#define NFS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/*
felt cute, might delete it later :3
*/
lli isVowel(char ch){
    ch = toupper(ch);
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

lli getCnt(string str, lli n){
    if(n == 1) return isVowel(str[n-1]);
    return getCnt(str, n-1) + isVowel(str[n-1]);
}
void solutionForProblem() {
    string str = "";
    getline(cin, str);
    cout << getCnt(str, str.length()) << endl;
}

////////////////////////////////////////////--Main Function--/////////////////////////////////////////////////////////////

int main() {
    NFS;
    lli testCases = 1;
    // cin >> testCases;
    while (testCases--) {
        solutionForProblem();
    }
    return 0;
}