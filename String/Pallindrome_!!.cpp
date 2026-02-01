#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) 
    {
        int low = 0, high = s.length() - 1;

        while (low <= high) {
            if (s[low] == s[high]) {
                low++;
                high--;
            } else {
                return isPalindrome(s, low + 1, high) ||
                       isPalindrome(s, low, high - 1);
            }
        }
        return true;
    }

    bool isPalindrome(string s, int low, int high)
    {
        while (low < high) {
            if (s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // 🔥 Hard-coded test cases
    string s1 = "abca";      // true (remove 'b' or 'c')
    string s2 = "racecar";   // true
    string s3 = "abc";       // false

    cout << s1 << " -> " << sol.validPalindrome(s1) << endl;
    cout << s2 << " -> " << sol.validPalindrome(s2) << endl;
    cout << s3 << " -> " << sol.validPalindrome(s3) << endl;

    return 0;
}
