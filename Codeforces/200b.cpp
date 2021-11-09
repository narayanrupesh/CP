#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double n;
    cin >> n;

    int volumeSum = 0;
    int p;

    while (cin >> p)
        volumeSum += p;

    cout << std:: fixed << std::showpoint;
    cout << std::setprecision(12);

    cout << (volumeSum / n) << "\n";

    return 0;
}
