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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr && n == 1) return nullptr; 
        ListNode* slow = new ListNode(-1);
        slow->next = head;
        ListNode* fast = head;
        head = slow;
        int inter = 0;
        while(fast) {
            inter++;
            if(inter > n) {
                slow = slow->next;
            }
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head->next;
    }
};

int main() {
    return 0;
}