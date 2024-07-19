#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* start = new ListNode(-1);
        start->next = head;
        ListNode* res = start;

        while(start != nullptr) {
            ListNode* temp = start->next;
            while(temp != nullptr && temp->val == val) {
                temp = temp->next;
            }
            start->next = temp;
            start = temp;
        }

        return res->next;
    }
};

int main() {
    return 0;
}