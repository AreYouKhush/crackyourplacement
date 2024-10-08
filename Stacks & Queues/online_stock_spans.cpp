#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
    stack<int> s;
    unordered_map<int, int> m;
public:
    StockSpanner(){
        
    }
    
    int next(int price){
        int cnt=1;
        while(!s.empty()){
            if(s.top() <= price){
                cnt+= m[s.top()];
                s.pop();
            }
            else break;
        }

        m[price]= cnt;
        s.push(price);

        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main() {
    return 0;
}