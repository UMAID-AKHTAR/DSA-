#include <iostream>
using namespace std;

// Definition for singly-linked list.
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:

    // Tumhara original function
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        int add = 0;

        while (l1 != nullptr || l2 != nullptr || add != 0) {

            int digit = add;

            if (l1 != nullptr) {
                digit += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                digit += l2->val;
                l2 = l2->next;
            }

            temp->val = digit % 10;
            add = digit / 10;

            if (l1 != nullptr || l2 != nullptr || add != 0) {
                temp->next = new ListNode(0);
                temp = temp->next;
            }
        }

        return res;
    }

    // Helper: list create karne ke liye
    ListNode* createList(int n) {
        if (n == 0) return nullptr;

        int x;
        cin >> x;
        ListNode* head = new ListNode(x);
        ListNode* temp = head;

        for (int i = 1; i < n; i++) {
            cin >> x;
            temp->next = new ListNode(x);
            temp = temp->next;
        }
        return head;
    }
    
    // Helper: list print karne ke liye
    void printList(ListNode* head) {
        while (head != nullptr) {
            cout << head->val;
            if (head->next != nullptr)
                cout << " -> ";
            head = head->next;
        }
        cout << endl;
    }
};

int main() {

    Solution obj;
    int n, m;
    cout << "Enter number of nodes in first list: ";
    cin >> n;
    cout << "Enter digits of first list: ";
    ListNode* l1 = obj.createList(n);
    cout << "Enter number of nodes in second list: ";
    cin >> m;
    cout << "Enter digits of second list: ";
    ListNode* l2 = obj.createList(m);
    ListNode* result = obj.addTwoNumbers(l1, l2);
    cout << "Result: ";
    obj.printList(result);

    return 0;
}
