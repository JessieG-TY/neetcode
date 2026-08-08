class NumArray {
private:
    vector<int> prefix;
public:
    NumArray(const vector<int>& nums) {
        int curr = 0;
        for (int num : nums){
            curr += num;
            prefix.push_back(curr);
        }
    }
    
    int sumRange(int left, int right) {
        int RightSum = prefix[right];
        int LeftSum = (left == 0) ? 0 : prefix[left - 1];
        return RightSum - LeftSum;
    }
};
