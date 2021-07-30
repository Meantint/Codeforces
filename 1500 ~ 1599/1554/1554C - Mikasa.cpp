#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int tc;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;

        if (n > m) {
            cout << 0 << '\n';
        }
        else {
            int value = 0;
            for (int i = 31; i >= 0; --i) {
                int left = (n & (1 << i));
                int right = (m & (1 << i));

                if (left == 0 && right != 0) {
                    value |= (1 << i);
                }
                else if (left != 0 && right == 0) {
                    break;
                }
            }

            if ((value ^ n) == m) {
                bool isFind = false;
                for (int i = 0; i < 32; ++i) {
                    int left = (n & (1 << i));
                    int right = (m & (1 << i));

                    if (left == 0 && right == 0) {
                        value |= (1 << i);

                        int del_index = i - 1;
                        while (del_index >= 0) {
                            value &= ~(1 << del_index);
                            --del_index;
                        }
                        isFind = true;
                        break;
                    }
                }
                if (!isFind) {
                    value = m + 1;
                }
            }

            cout << value << '\n';
        }
    }

    return 0;
}