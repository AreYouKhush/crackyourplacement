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

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nxt = head->next;
        while(curr != nullptr) {
            curr->next = prev;
            prev = curr;
            curr = nxt;
            if(nxt != nullptr) nxt = nxt->next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head->next == nullptr) return true;
        if(head->next->next == nullptr) return head->val == head->next->val;
        ListNode* mid = head;
        ListNode* fast = head->next;
        while(fast && fast->next) {
            mid = mid->next;
            fast = fast->next->next;
        }
        ListNode* head2;
        if(fast != nullptr) {
            head2 = reverse(mid->next);
            mid = mid->next;
        } else head2 = reverse(mid);
        while(head != mid && head2) {
            if(head->val != head2->val) return false;
            head = head->next;
            head2 = head2->next;
        }
        if(fast != nullptr && (head->next != nullptr || head2 != nullptr)) return false;
        return true;
    }
};

int main() {
    return 0;
}