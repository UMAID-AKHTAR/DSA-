#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100},
            {'D', 500}, {'M', 1000}
        };

        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && value[s[i]] < value[s[i + 1]]) {
                sum -= value[s[i]];
            } else {
                sum += value[s[i]];
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;

    // 🔥 Hard-coded test cases
    string s1 = "III";      // 3
    string s2 = "LVIII";    // 58
    string s3 = "MCMXCIV";  // 1994

    cout << s1 << " -> " << sol.romanToInt(s1) << endl;
    cout << s2 << " -> " << sol.romanToInt(s2) << endl;
    cout << s3 << " -> " << sol.romanToInt(s3) << endl;

    return 0;
}
