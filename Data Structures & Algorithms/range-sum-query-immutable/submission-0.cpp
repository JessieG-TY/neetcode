class NumArray {
private:
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        int current = 0;
        for (int num : nums){
            current += num;
            prefix.push_back(current);
        }
    }
    
    int sumRange(int left, int right) {
        int rightSum = prefix[right];
        int leftSum = left > 0 ? prefix[left - 1] : 0;
        return rightSum - leftSum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */