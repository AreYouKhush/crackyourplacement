#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> s;
        s.push(-1);
        for(int i=nums2.size()-1;i>=0;i--){
            int num=nums2[i];
            while(s.top()!=-1 && s.top()<num){
                s.pop();
            }
            mp[num]=s.top();
            s.push(num);
        }
        vector<int> ans;
        for(auto it : nums1){
            ans.push_back(mp[it]);
        }
        return ans;
    }
};

int main() {
    return 0;
}