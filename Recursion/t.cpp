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
lli calcComb(lli n, lli r){
    if(r == 0) return 1;
    return n * calcComb(n-1, r-1) / r; 
}
void solutionForProblem() {
    lli n, r; cin >> n >> r;

    // nCr = (n-1)C(r-1) + (n-1)C(r)
    cout << calcComb(n, r) << endl;
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