#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int lenA = 0;
        int lenB = 0;
        ListNode* lastA;
        ListNode* lastB;
        while(tempA) {
            lenA++;
            if(tempA->next == nullptr) lastA = tempA;
            tempA = tempA->next;
        } 
        while(tempB) {
            lenB++;
            if(tempB->next == nullptr) lastB = tempB;
            tempB = tempB->next;
        }
        if(lastA != lastB) return nullptr;
        while(lenA > lenB) {
            headA = headA->next;
            lenA--;
        }
        while(lenB > lenA) {
            headB = headB->next;
            lenB--;
        }
        while(headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};

int main() {
    return 0;
}