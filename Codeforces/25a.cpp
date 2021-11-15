#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num;
    copy(istream_iterator<int>(cin), istream_iterator<int>(),
         back_inserter(num));

    int a1 = 0, a2 = 0;
    int e = 0, o = 0;

    for (int i = 0; i < num.size(); ++i)
    {
        if (num[i] % 2)
        {
            a1 = i;
            ++o;
        }
        else
        {
            a2 = i;
            ++e;
        }
    }

    cout << (o == 1 ? a1 + 1 : a2 + 1) << "\n";

    return 0;
}

// Problem link: https://codeforces.com/contest/25/problem/A
