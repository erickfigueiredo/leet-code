// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/two-sum/


class Solution {
    public:
        vector<int>twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> consult;
            for(int i = 0; i < nums.size(); i++)
                consult.insert({nums[i], i});

            vector<int> solution;
            for(int i = 0; i < nums.size(); i++) {
                auto it = consult.find(target-nums[i]);
                if(it != consult.end() and it->second != i){
                    solution.push_back(i);
                    solution.push_back(it->second);
                    break;
                }
            }

            return solution;
        }
};
