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
lli isEqual(vector<lli> &v, lli x, lli j, lli n, lli sum){
    if (j == n) return x == sum;  
    return isEqual(v, x, j+1, n, sum + v[j]) || isEqual(v, x, j+1, n, sum - v[j]);  
}

void solutionForProblem() {
    lli n, x; cin >> n >> x; 
    vector<lli> v(n);
    f(i, 0, n) cin >> v[i];  

    cout << (isEqual(v, x, 1, n, v[0]) ? "YES" : "NO") << endl;  
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