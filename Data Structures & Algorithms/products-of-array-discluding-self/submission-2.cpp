class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> multiple(n);

        multiple[0] = 1;
        for (int i = 1; i < n; i++) {
            multiple[i] = multiple[i - 1] * nums[i - 1];
        }

        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            multiple[i] = multiple[i] * rightProduct;
            rightProduct *= nums[i];
        }
        
        return multiple;
    }
};
