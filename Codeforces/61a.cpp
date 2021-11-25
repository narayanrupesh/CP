#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); ++i)
        cout << ((a[i] - '0') ^ (b[i] - '0'));

    cout << "\n";

    return 0;
}

// Problem Link: https://codeforces.com/problemset/problem/61/A
