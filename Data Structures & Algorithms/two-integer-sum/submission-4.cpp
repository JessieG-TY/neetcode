class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> premap;

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (premap.count(diff)){
                return {premap[diff], i};
            }
            premap.insert({nums[i], i});
        }
        return {};
    }
};
