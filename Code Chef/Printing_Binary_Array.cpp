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
        int prev,pre;
        cin >> prev;
        pre = prev;
        int curr, val = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> curr;
            if (curr != prev)
            {
                val++;
            }
            prev = curr;
        }
        prev = pre ^1;
        cout << prev << " ";
        for (int i = 0; i < n - 1; i++)
        {
            if (val > 0)
            {
                prev = prev ^ 1;
                cout << prev << " ";
                val--;
            }
            else
            {
                cout << prev << " ";
            }
        }

        cout << "\n";
    }
    return 0;
}