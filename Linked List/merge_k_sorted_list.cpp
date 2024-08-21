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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto it: lists){
            while(it){
                pq.push(it->val);
                it = it->next;
            }
        }
        if(pq.empty()){
            return NULL;
        }
        ListNode* head = new ListNode(pq.top());
        ListNode* mover = head;
        pq.pop();
        while(!pq.empty()){
            ListNode* temp = new ListNode(pq.top());
            pq.pop();
            mover->next = temp;
            mover = mover->next;
        }
        return head;
    }
};

int main() {
    return 0;
}