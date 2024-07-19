#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution{
    public:
    Node* segregate(Node *head) {
        int zeroes = 0;
        int ones = 0;
        int twos = 0;
        Node* temp = head;
        while(temp) {
            if(temp->data == 0) zeroes++;
            else if(temp->data == 1) ones++;
            else twos++;
            temp = temp->next;
        }
        temp = head;
        while(temp) {
            if(--zeroes >= 0) temp->data = 0;
            else if(--ones >= 0) temp->data = 1;
            else if(--twos >= 0) temp->data = 2;
            temp = temp->next;
        }
        return head;
    }
};

int main() {
    return 0;
}