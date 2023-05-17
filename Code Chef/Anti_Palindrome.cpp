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
        char ch;
        int arr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> ch;
            arr[ch - 'a']++;
        }
        int num = 0, odds = 0, even = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                num++;
                if (arr[i] % 2)
                {
                    odds++;
                }
                else
                {
                    even++;
                }
            }
        }
        if (num == 1 && n % 2 == 1)
        {
            cout << 2 << "\n";
        }
        else
        {
            if (n % 2 == 0)
            {
                if (odds == 0)
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            else
            {
                if (odds == 1)
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
        }
    }
    return 0;
}