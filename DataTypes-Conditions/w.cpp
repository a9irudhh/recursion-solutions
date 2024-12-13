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
    lli a, b, c;
    char d, e;
    cin >> a >> d >> b >> e >> c;
    if(d == '+')
        a+b == c ? cout << "Yes\n" : cout << a+b << endl;
    else if(d == '-')
        a-b == c ? cout << "Yes\n" : cout << a-b << endl;
    else if(d == '*')
        a*b == c ? cout << "Yes\n" : cout << a*b << endl;
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