#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        if (arr.size() < 2) return {};

        sort(arr.begin(), arr.end());

        vector<vector<int>> v;
        int mn = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            int cur = arr[i] - arr[i - 1];

            if (cur < mn) {
                mn = cur;
                v.clear();
                v.push_back({arr[i - 1], arr[i]});
            }
            else if (cur == mn) {
                v.push_back({arr[i - 1], arr[i]});
            }
        }
        return v;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {4, 2, 1, 3};
    vector<vector<int>> ans = obj.minimumAbsDifference(arr);

    // Output print
    for (auto pair : ans) {
        cout<<"["<<pair[0]<<", "<<pair[1]<<"] ";
    }

    return 0;
}
