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
    ListNode* reverseList(ListNode* head) {
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
};

int main() {
    return 0;
}