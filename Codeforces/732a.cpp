#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int i = 1;
    int shovelWithoutr = 1, shovelWithr = 1;

    while (shovelWithoutr % 10 && shovelWithr % 10)
    {
        shovelWithoutr = (k * i) % 10;
        shovelWithr = ((k * i) - r) % 10;
        ++i;
    }

    cout << i-1 << "\n";

    return 0;
}

// Problem Link: https://codeforces.com/contest/732/problem/A
