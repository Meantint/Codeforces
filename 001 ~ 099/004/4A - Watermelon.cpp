#include <iostream>

using namespace std;

int w;

int main()
{
    cin >> w;

    if (w % 2 == 1 || w == 2) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
    }

    return 0;
}