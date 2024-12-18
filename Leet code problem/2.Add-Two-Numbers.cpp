#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ret = nullptr;
    ListNode* cur = nullptr;
    int carry = 0;
    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        carry += (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val);
        auto temp = new ListNode(carry % 10);
        carry /= 10;
        if (ret == nullptr) {
            ret = temp;
            cur = ret;
        } else {
            cur->next = temp;
            cur = cur->next;
        }
        l1 = l1 == nullptr ? nullptr : l1->next;
        l2 = l2 == nullptr ? nullptr : l2->next;
    }
    return ret;
}

// Helper function to create a linked list from user input
ListNode* createList() {
    ListNode* head = nullptr;
    ListNode* cur = nullptr;
    cout << "Enter values for the list (-1 to stop): ";
    while (true) {
        int value;
        cin >> value;
        if (value == -1) break;
        auto temp = new ListNode(value);
        if (head == nullptr) {
            head = temp;
            cur = head;
        } else {
            cur->next = temp;
            cur = cur->next;
        }
    }
    return head;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    cout << "Enter the first list:" << endl;
    ListNode* l1 = createList();

    cout << "Enter the second list:" << endl;
    ListNode* l2 = createList();

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Resultant list: ";
    printList(result);

    return 0;
}
