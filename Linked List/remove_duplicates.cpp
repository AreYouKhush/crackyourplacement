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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp != nullptr) {
            int num = temp->val;
            ListNode* nxt = temp->next;
            while(nxt != nullptr && num == nxt->val) {
                nxt = nxt->next;
            }
            temp->next = nxt;
            temp = nxt;
        }
        return head;
    }
};

int main() {
    return 0;
}