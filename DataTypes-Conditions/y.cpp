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
lli get2Digit(lli n) {
    return n % 100;
}
 
void solutionForProblem() {
    lli a, b, c, d;
    cin >> a >> b >> c >> d;

    a = get2Digit(a);
    b = get2Digit(b);
    c = get2Digit(c);
    d = get2Digit(d);
    get2Digit(a * b * c * d) ? (get2Digit(a * b * c * d) < 10 ? cout << 0 << get2Digit(a * b * c * d) << endl : cout << get2Digit(a * b * c * d) << endl) : cout << "00" << endl;
    return;
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