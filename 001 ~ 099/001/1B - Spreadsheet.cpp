#include <iostream>
#include <string>
#include <vector>

using namespace std;

int tc;

bool isNum(char ch)
{
    if ('0' <= ch && ch <= '9') {
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;

        int str_size = str.size();

        string temp = "";
        temp = str[0];

        vector<string> str_list;
        for (int i = 1; i < str_size; ++i) {
            if (isNum(str[i]) != isNum(temp.back())) {
                str_list.push_back(temp);
                temp = str[i];
            }
            else {
                temp += str[i];
            }
        }
        str_list.push_back(temp);

        string answer = "";
        if (str_list.size() == 4) {
            int value = stoi(str_list[3]);

            while (value != 0) {
                if (value % 26 == 0) {
                    answer = 'Z' + answer;
                    value -= 26;
                }
                else {
                    answer = (char)((value % 26) + 'A' - 1) + answer;
                }
                value /= 26;
            }

            answer += str_list[1];
        }
        else {
            answer += 'R';
            answer += str_list[1];
            answer += 'C';

            int value = 0;
            for (auto ch : str_list[0]) {
                value *= 26;
                value += (ch - 'A' + 1);
            }
            answer += to_string(value);
        }

        cout << answer << '\n';
    }

    return 0;
}