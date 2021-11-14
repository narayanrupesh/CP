#include <bits/stdc++.h>
using namespace std;

int step(int x, int y)
{
    int i = 10;
    int c = 0;
    int d = y - x;

    while (d)
    {
        c = c + (d / i);
        d = d % i;
        --i;
    }

    return c;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int a, b;

    while (t--)
    {
        cin >> a >> b;

        if (a < b) cout << step(a, b) << "\n";
        else cout << step(b, a) << "\n";

    }

    return 0;
}

// Problem Link: https://codeforces.com/contest/1409/problem/A
