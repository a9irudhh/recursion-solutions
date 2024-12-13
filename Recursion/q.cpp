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
lli threeNplusOne(lli n, lli cnt){
    cnt++;

    if(n == 1) 
        return cnt;
    
    if(n%2 == 0) return threeNplusOne(n/2, cnt);
    else return threeNplusOne(3*n+1, cnt);
}
void solutionForProblem() {
    lli n, cnt = 0; cin >> n;
    cout << threeNplusOne(n, cnt) << endl;
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