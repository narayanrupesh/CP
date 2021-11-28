#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
    map<int, int> m;

    while (n)
    {
        ++m[n%10];
        n /= 10;
    }

    if (m.size() == 1) return m[4] || m[7];
    else if (m.size() == 2) return m[4] && m[7];
    
    return false;
}

int main()
{
    int n, n2;
    cin >> n;

    n2 = n;

    bool flag = false;

    if (isLucky(n)) flag = true;

    else
    {
        while (n2--)
        {
           if (isLucky(n2))
           {
                if (n % n2 == 0) 
                {
                    flag = true;
                    break;
                }
           }
        }
    }

    cout << (flag ? "YES" : "NO") << "\n";
    
    return 0;
}

// Problem Link: https://codeforces.com/problemset/problem/122/A
