#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    auto h = find(s.begin(), s.end(), 'h');
    auto e = find(h+1, s.end(), 'e');
    auto l = find(e+1, s.end(), 'l');
    auto ll = find(l+1, s.end(), 'l');
    auto o = find(ll+1, s.end(), 'o');

    cout << ( e == s.end() || l == s.end() || ll == s.end() ||
              o == s.end() ? "NO" : "YES") << "\n";

    return 0;
}

// Problem Link: https://codeforces.com/problemset/problem/58/A
