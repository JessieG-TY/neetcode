class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> find;
        for (int num : nums){
            if (find.count(num)){
                return true;
            }
            find.insert(num);
        }
        return false;
    }
};