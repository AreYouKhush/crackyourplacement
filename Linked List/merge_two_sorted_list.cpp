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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* head;
        if(list1->val < list2->val) {
            head = new ListNode(list1->val);
            list1 = list1->next;
        } else {
            head = new ListNode(list2->val);
            list2 = list2->next;
        }
        ListNode* temp = head;
        while(list1 || list2) {
            int n1 = INT_MAX;
            int n2 = INT_MAX;
            if(list1) n1 = list1->val;
            if(list2) n2 = list2->val;
            ListNode* n;
            if(n1 < n2){
                n = new ListNode(n1);   
                if(list1) list1 = list1->next;
            } else {
                n = new ListNode(n2);
                if(list2) list2 = list2->next;
            } 
            temp->next = n;
            temp = temp->next;
        }
        return head;
    }
};

int main() {
    return 0;
}