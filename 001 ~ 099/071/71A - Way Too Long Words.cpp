#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        cin >> str;

        if (str.size() > 10) {
            cout << str[0] + to_string(str.size() - 2) + str.back() << '\n';
        }
        else {
            cout << str << '\n';
        }
    }

    return 0;
}