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

lli getSum(vector<lli>& v, lli i, lli n) {
    if (i == n - 1) return v[i];
    v[i] = v[i] + getSum(v, i + 1, n);
    return v[i];
}

void solutionForProblem() {
    lli n, m;
    cin >> n >> m;
    vector<lli> v(n);
    f(i, 0, n) cin >> v[i];
    
    getSum(v, 0, n);
    // for(auto it: v) cout << it << ' ';
    //     cout << endl;
    cout << v[n - m] << endl;
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