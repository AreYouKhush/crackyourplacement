#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr, int idx){
        ans.push_back(curr);                             
        for(int i=idx;i<nums.size();i++){                      
            if(i>idx &&  nums[i]==nums[i-1]) 
            continue;                                          
            curr.push_back(nums[i]);                           
            helper(nums,ans,curr,i+1); 
            curr.pop_back();                                  
        }
   }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<vector<int>> ans; 
        vector<int> curr; 
        sort(nums.begin(),nums.end()); 
                     
        helper(nums,ans,curr,0);                      
        return ans; 
      } 
    
};

int main() {
    return 0;
}