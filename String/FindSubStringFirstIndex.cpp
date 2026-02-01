// s1=sadfkdhkhsad s2=sad find find occurence index

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if (needle == "") return 0;

        int n = haystack.length();
        int m = needle.length();

        for (int i = 0; i <= n - m; i++) {
            int low = 0;
            int temp = i;

            while (low < m && haystack[temp] == needle[low]) {
                low++;
                temp++;
            }

            if (low == m) return i;
        }
        return -1;
    }
};

int main() {
    Solution sol;

    string haystack, needle;
    cout << "Enter haystack string: ";
    cin >> haystack;

    cout << "Enter needle string: ";
    cin >> needle;

    int result = sol.strStr(haystack, needle);

    cout << "Index: " << result << endl;

    return 0;
}
