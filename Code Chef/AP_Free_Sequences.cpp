#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool b[2000005];
        for (int i = 0; i < 2000005; i++)
        {
            b[i] = false;
        }
        int n;
        cin >> n;
        bool flag = true;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 2; j < n; j++)
            {
                int x = a[i] + a[j];
                b[x] = true;
                // cout <<  x << " ";
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            int x = a[i] * 2;
            if (b[x] == true)
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
    return 0;
}