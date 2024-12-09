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
void calculateSum(vector<vector<lli>>& a, vector<vector<lli>>& b, vector<vector<lli>>& res, lli r, lli c, lli i, lli j) {
    if (i >= r) return;
    if (j >= c) { 
        calculateSum(a, b, res, r, c, i + 1, 0);
        return;
    }

    res[i][j] = a[i][j] + b[i][j];
    calculateSum(a, b, res, r, c, i, j + 1);
}

void solutionForProblem() {
    lli r, c; cin >> r >> c;
    vector<vector<lli>> a(r, vector<lli>(c)), b(r, vector<lli>(c)), res(r, vector<lli>(c));
    f(i, 0, r) f(j, 0, c) cin >> a[i][j];
    f(i, 0, r) f(j, 0, c) cin >> b[i][j];

    calculateSum(a, b, res, r, c, 0, 0);
    f(i, 0, r) {
        f(j, 0, c) cout << res[i][j] << ' ';
        cout << endl;
    }
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