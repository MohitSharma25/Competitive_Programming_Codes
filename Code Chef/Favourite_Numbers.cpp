#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 14 == 0)
        {
            cout << "Alice\n";
        }
        else if (n % 2 == 1 && n % 9 == 0)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Charlie\n";
        }
    }
    return 0;
}