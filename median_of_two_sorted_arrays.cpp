// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/median-of-two-sorted-arrays/


class Solution {
public:
    vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i1 = 0, i2 = 0;

        while (i1 != nums1.size() or i2 != nums2.size()) {
            if (i1 < nums1.size() and i2 < nums2.size()) {
                if (nums1[i1] <= nums2[i2])
                    result.push_back(nums1[i1++]);
                else
                    result.push_back(nums2[i2++]);

            }
            else if (i1 < nums1.size())
                result.push_back(nums1[i1++]);
            else
                result.push_back(nums2[i2++]);
        }

        return result;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result = merge(nums1, nums2);
        const int size = result.size();

        if (size % 2) {
            return result[size / 2];
        }
        else {
            return (result[size / 2 - 1] + result[size / 2]) / 2.;
        }
    }
};
