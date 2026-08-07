class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> arr(nums.begin(), nums.end());
        for (int i = 0; i < arr.size(); i++){
            int check = arr[i];
            for (int j = i+1; j < arr.size(); j++){
                if (check == arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};