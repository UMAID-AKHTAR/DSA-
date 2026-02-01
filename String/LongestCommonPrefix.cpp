/*
Enter number of strings: 3
Enter strings:
flower
flow
flight
Longest Common Prefix: fl  
*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.size() == 0) return "";

        string common = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int high = 0;

            while (high < strs[i].length() &&
                   high < common.length() &&
                   common[high] == strs[i][high]) {
                high++;
            }

            common.resize(high);

            if (common == "") return "";
        }
        return common;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = sol.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
