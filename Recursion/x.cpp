// Written by Anirudh R. H.

#include <bits/stdc++.h>
using namespace std;

///////////////////////////////////////////////--definitions and functionalities--//////////////////////////////////////////////////////////////

#define lli long long int
#define f(i, m, n) for(lli i = m; i < n; i++)
#define fr(i, m, n) for(lli i = m; i >= n; i--)
#define endl '\n'
#define inf LLONG_MAX
#define MOD 1e9+7
#define NFS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/*
felt cute, might delete it later :3
*/
lli help(vector<vector<lli>> &v, lli x, lli y, lli n, lli m) {
    if(x >= n || y >= m) return -inf;
    else if(x == n-1 && y == m-1) return v[x][y];

    lli one = help(v, x+1, y, n, m);
    lli two = help(v, x, y+1, n, m);

    return v[x][y] + max(one, two);
}

void solutionForProblem() {
    lli n, m; cin >> n >> m;
    vector<vector<lli>> v(n, vector<lli> (m));

    f(i, 0, n) f(j, 0, m) cin >> v[i][j];
    cout << help(v, 0, 0, n, m) << endl;
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