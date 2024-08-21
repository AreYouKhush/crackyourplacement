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

    ListNode* reverse(ListNode* head, ListNode* end) {
        ListNode* tempHead = head;
        ListNode* nextNode = nullptr;
        while(tempHead != end) {
            ListNode* t = tempHead->next;
            tempHead->next = nextNode;
            nextNode = tempHead;
            tempHead = t;
        }
        return nextNode;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        ListNode* tempHead = head;
        ListNode* start = head;
        ListNode* end = head;
        ListNode* before = new ListNode(0);
        ListNode* newHead = before;
        int count = 0;
        while(tempHead != nullptr) {
            count++;
            if(count%k == 0) {
                end = tempHead->next;
                before->next = reverse(start, end);
                while(before->next != nullptr){
                    before = before->next;
                }
                start = end;
                tempHead = end;
            } else{
                tempHead = tempHead->next;
            }
        }
        before->next = start;
        return newHead->next;
    }
};

int main() {
    return 0;
}