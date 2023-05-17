#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll h, n;
        cin >> h >> n;
        if (h == n)
        {
            cout << "YES\n";
        }
        else if (h < n)
        {
            cout << "NO\n";
        }
        else
        {
            while (h % 2 == 0)
            {
                h /= 2;
            }
            if (n % h == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
