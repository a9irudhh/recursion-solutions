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
    double x;
    cin >> x;
    if (x < 0 || x > 100)
    {
        cout << "Out of Intervals" << endl;
        return;
    }
 
    if (x >= 0 && x <= 25)
        cout << "Interval [0,25]" << endl;
    else if (x > 25 && x <= 50)
        cout << "Interval (25,50]" << endl;
    else if (x > 50 && x <= 75)
        cout << "Interval (50,75]" << endl;
    else if (x > 75 && x <= 100)
        cout << "Interval (75,100]" << endl;
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