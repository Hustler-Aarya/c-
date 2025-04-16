#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            // time complexity=O(n*m)
            // space complexity=O(n+m)
            // not an optimal solution  but better than traditional bruteforce method as lookup is faster in with approach 
            unordered_map<int,int>mp;
            vector<int>ans(nums1.size(),-1);
            for(int i=0;i<nums2.size();i++){
                mp[nums2[i]]=i;
            }
            for(int i=0;i<nums1.size();i++){
                int index=mp[nums1[i]];
                for(int j=index+1;j<nums2.size();j++){
                    if(nums2[j]>nums1[i]){
                        ans[i]=nums2[j];
                        break;
                    }
                }
            }
            return ans;
        }
    };

int main(){

return 0;
}