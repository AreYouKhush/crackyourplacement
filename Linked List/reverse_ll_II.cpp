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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* tempHead = new ListNode(-1);
        tempHead->next = head;
        head = tempHead;
        int pos = 0;
        while(tempHead) {
            ListNode* temp = tempHead;
            tempHead = tempHead->next;
            pos++;
            if(pos == left) {
                ListNode* prev = nullptr;
                ListNode* cur = tempHead;
                ListNode* nxt;
                if(cur) nxt = cur->next;
                while(pos != right + 1 && cur != nullptr) {
                    cur->next = prev;
                    prev = cur;
                    cur = nxt;
                    if(nxt) nxt = nxt->next;
                    pos++;
                }
                temp->next = prev;
                while(temp->next != nullptr) {
                    temp = temp->next;
                }
                if(cur) temp->next = cur;
                break;
            }
        }
        return head->next;
    }
};

int main() {
    return 0;
}