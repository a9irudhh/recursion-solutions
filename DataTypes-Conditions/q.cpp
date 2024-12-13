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
    long double a, b;
    cin >> a >> b;
 
    if (a == 0 && b == 0)
        cout << "Origem";
    else if (a == 0)
        cout << "Eixo Y";
    else if (b == 0)
        cout << "Eixo X";
    else if (a >= 0 && b >= 0)
        cout << "Q1";
    else if (a <= 0 && b >= 0)
        cout << "Q2";
    else if (a <= 0 && b <= 0)
        cout << "Q3";
    else if (a >= 0 && b <= 0)
        cout << "Q4";
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