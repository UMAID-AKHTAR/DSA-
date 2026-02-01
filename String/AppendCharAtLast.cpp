/*   Enter string s: coaching
Enter string t: coding
Characters to append: 4
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t)
    {
        int low = 0;

        for (int i = 0; i < s.length() && low < t.length(); i++) {
            if (s[i] == t[low])
                low++;
        }
        return t.length() - low;
    }
};

int main() {
    Solution sol;

    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;
    int result = sol.appendCharacters(s, t);
    cout << "Characters to append: " << result << endl;

    return 0;
}
