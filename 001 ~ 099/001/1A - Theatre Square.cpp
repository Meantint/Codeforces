#include <iostream>

#define ll long long

using namespace std;

int n, m, a;

int main()
{
    cin >> n >> m >> a;

    int row = (n - 1) / a + 1;
    int col = (m - 1) / a + 1;

    cout << (ll)row * (ll)col << '\n';

    return 0;
}