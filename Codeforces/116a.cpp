#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> t;
    int x, y;

    while (n--)
    {
        cin >> x >> y;
        t.emplace_back(x, y);
    }

    int ans = 0;
    int sum = 0;

    for ( auto [a, b] : t)
    {
        sum = sum - a + b;
        ans = max(ans, sum);
    }

    cout << ans << "\n";

    return 0;
}

// Problem Link: https://codeforces.com/problemset/problem/116/A
