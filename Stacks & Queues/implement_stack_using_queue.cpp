#include<bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int> q;
public:
    MyStack() {}
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.empty()) return -1;
        int size = q.size();
        while(size != 1) {
            size--;
            q.push(q.front());
            q.pop();
        }
        int num = q.front();
        q.pop();
        return num;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main() {
    return 0;
}