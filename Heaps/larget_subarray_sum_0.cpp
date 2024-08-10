#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>& arr, int n) {
        // Your code here
        int sum=0;
        int maxx=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            
            if(sum==0)
            {
                maxx=i+1;
            }
            else
            {
                if(mp.find(sum)!=mp.end())
                {
                    maxx=max(maxx,i-mp[sum]);
                }
                else
                {
                    mp[sum]=i;
                }
                
            }
        }
        return maxx;
    }

int main() {
    return 0;
}