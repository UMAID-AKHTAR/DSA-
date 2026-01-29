#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, mx = 0;
        unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++) {          
            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]] = i;
                int len = i - left + 1;
                mx = max(len, mx);
            } else {
                while (mp.find(s[i]) != mp.end()) {
                    mp.erase(s[left]);
                    left++;
                }
                mp[s[i]] = i;
            }
        }
        return {mx,mp};
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter string: ";
    cin >> s;

    int ans = obj.lengthOfLongestSubstring(s);
    cout << "Length of longest substring without repeating characters: "
         << ans << endl;

    return 0;
}
