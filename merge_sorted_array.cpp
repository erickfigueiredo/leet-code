// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/merge-sorted-array/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int i1 = 0, i2 = 0;
        
        while(i1 != nums1.size()-n or i2 != nums2.size()) {
            if(i1 < nums1.size()-n and i2 < nums2.size()) {
                if(nums1[i1] <= nums2[i2])
                    result.push_back(nums1[i1++]);
                else
                    result.push_back(nums2[i2++]);
                
            } else if (i1 < nums1.size()-n)
                result.push_back(nums1[i1++]);
            else 
                result.push_back(nums2[i2++]);
        }
        
        nums1 = result;
    }
};