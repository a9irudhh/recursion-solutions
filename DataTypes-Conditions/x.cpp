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
void solutionForProblem() {
    lli a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if (b < c || a > d)
    {
        cout << -1;
        return;
    }
 
    if (c >= a && d <= b)
        cout << c << " " << d;
    else if (c >= a && d >= b)
        cout << c << " " << b;
    else if (c <= a && d >= b)
        cout << a << " " << b;
    else if (c <= a && d <= b)
        cout << a << " " << d;
    else
        cout << -1;
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