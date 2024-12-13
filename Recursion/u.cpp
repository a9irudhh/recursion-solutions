// Written by Anirudh R. H.

#include <bits/stdc++.h>
using namespace std;

///////////////////////////////////////////////--definitions and functionalities--//////////////////////////////////////////////////////////////

#define lli long long int
#define f(i, m, n) for(lli i = m; i < n; i++)
#define fr(i, m, n) for(lli i = m; i >= n; i--)
#define endl '\n'
#define inf 1e18
#define MOD 1000000007 // Fixed the MOD definition
#define NFS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/*
felt cute, might delete it later :3
*/
lli knapsack(lli n, lli w, vector<pair<lli, lli>>& vp) {
    if (n == 0 || w == 0) return 0;

    if (vp[n - 1].second > w) 
        return knapsack(n - 1, w, vp);

    return max(knapsack(n - 1, w, vp), vp[n - 1].first + knapsack(n - 1, w - vp[n - 1].second, vp));
}

void solutionForProblem() {
    lli n, w;
    cin >> n >> w;
    vector<pair<lli, lli>> vp(n);
    f(i, 0, n) cin >> vp[i].second >> vp[i].first;
    cout << knapsack(n, w, vp) << endl;
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
