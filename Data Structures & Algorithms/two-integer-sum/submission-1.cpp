class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++){
            int find = target - nums[i];
            for (int j = i+1; j<nums.size(); j++){
                if (find == nums[j]){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
