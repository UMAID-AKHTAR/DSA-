#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // 1️⃣ Vector declaration
    vector<int> v;

    // 2️⃣ Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 3️⃣ Print vector
    cout << "Vector elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 4️⃣ Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    // 5️⃣ Find element
    auto it = find(v.begin(), v.end(), 20);
    if(it != v.end()) {
        cout << "20 found at index: " << *it << endl;
    }

    // 6️⃣ Delete element (20)
    if(it != v.end()) {
        v.erase(it);
    }

    // 7️⃣ Print after delete
    cout << "After deletion: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // 8️⃣ Sort vector
    sort(v.begin(), v.end());

    // 9️⃣ Clear vector
    v.clear();

    // 🔟 Check empty
    if(v.empty()) {
        cout << "Vector is empty";
    }

    return 0;
}
