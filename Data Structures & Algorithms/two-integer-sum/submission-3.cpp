class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> res; //number -> index
        for (int i = 0; i < nums.size(); i++){
            res[nums[i]] = i;
        }

        for (int i = 0; i< nums.size(); i++){
            int find = target - nums[i];
            if (res.count(find) && res[find] != i){
                return {i, res[find]};
            }
        }
        return {};
    }
};
