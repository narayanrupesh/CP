#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numOfficer = 0, numCrimes = 0;
    int input;

    while (n--)
    {
        cin >> input;
        numOfficer = ( numOfficer <= 0 ? input : numOfficer + input);
        numCrimes = ( numOfficer >= 0 ? numCrimes : numCrimes + 1 );
    }

    cout << numCrimes << "\n";

    return 0;
}

// Problem Link: https://codeforces.com/contest/427/problem/A
