/**
* Written By Anirudh R. H.
* Date: 10/05/2024
* Time: 15:22:44
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
    char c;
    cin >> c;
    if(c == 'z')
    {
        cout << 'a' << endl;
        return;
    }
    cout << (char)(c+1) << endl;
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