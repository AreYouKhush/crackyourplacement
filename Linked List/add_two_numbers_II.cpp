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
        ListNode* cur = head;
        ListNode* nxt; 
        if(cur) nxt = cur->next;
        while(cur != nullptr) {
            cur->next = prev;
            prev = cur;
            cur = nxt;
            if(nxt) nxt = nxt->next;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry = 0;
        int sum = l1->val + l2->val;
        int num = sum;
        if(sum > 9) {
            carry = 1;
            num %= 10;
        }
        ListNode* newHead = new ListNode(num);
        ListNode* tempHead = newHead;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 || l2) {
            sum = carry;
            carry = 0;
            if(l1) sum += l1->val;
            if(l2) sum += l2->val;
            num = sum;
            if(sum > 9) {
                carry = 1;
                num %= 10;
            }
            ListNode* temp = new ListNode(num);
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            tempHead->next = temp;
            tempHead = tempHead->next;
        }
        if(carry == 1) {
            ListNode* temp = new ListNode(carry);
            tempHead->next = temp;
        }
        newHead = reverse(newHead);
        return newHead;
    }
};

int main() {
    return 0;
}