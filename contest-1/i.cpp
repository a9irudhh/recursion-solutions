/**
* Written By Anirudh R. H.
* Date: 16/05/2024
* Time: 09:05:08
*/

#include <bits/stdc++.h>
using namespace std;

///////////////////////////////////////////////--definitions--//////////////////////////////////////////////////////////////

#define lli long long int
#define f(i, m, n) for(lli i = m; i < n; i++)
#define fr(i, m, n) for(lli i = m; i >= n; i--)
#define endl '\n'
/////////////////////////////////////////--needed functionalities--////////////////////////////////////////////////////////
lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    else 
        return gcd(b, a % b);
}

void solutionForProblem()
{
    lli n;
    cin >> n;
    lli s = n % 10;
    n/= 10;
    lli f = n;

    if(s == 0)
        cout << "YES" << endl;
    else
    {
        if(!(s%f) || !(f%s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return;
}

////////////////////////////////////////////--Main Function--/////////////////////////////////////////////////////////////

int main()
{
    //don't know don't care
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int testCases = 1;
    // cin >> testCases;
    while (testCases--)
        solutionForProblem();

    return 0;

}