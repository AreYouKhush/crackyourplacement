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
    int getDecimalValue(ListNode* head) {
        ListNode* tempHead = head->next;
        int twos = 1;
        while(tempHead != nullptr) {
            tempHead = tempHead->next;
            twos *= 2;
        }
        int res = 0;
        while(head != nullptr) {
            res += (head->val * twos);
            twos /= 2;
            head = head->next;
        }
        return res;
    }
};

int main() {
    return 0;
}