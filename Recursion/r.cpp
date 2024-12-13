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
lli isPalindrome(lli l, lli r, vector<lli>& v) {
    if (l >= r) return 1;
    if (v[l] != v[r]) return 0; 
    return isPalindrome(l + 1, r - 1, v);
}

void solutionForProblem() {
    lli n; cin >> n;
    vector<lli>v(n);
    f(i, 0, n) cin >> v[i];

    cout << (isPalindrome(0, n-1, v) ? "YES" : "NO") << endl;
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