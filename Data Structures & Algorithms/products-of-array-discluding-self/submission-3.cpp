class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zero = 0;
        for (int num: nums){
            if (num != 0){
                prod *= num;
            } else {
                zero++;
            }
        }

        if (zero > 1){
            return vector<int>(nums.size(), 0);
        }

        vector<int> res(nums.size());
        for (int i = 0; i<nums.size(); i++){
            if (zero > 0){
                res[i] = (nums[i] == 0) ? prod : 0;
            } else {
                res[i] = prod / nums[i];
            }
        }
        return res;
    }
};
