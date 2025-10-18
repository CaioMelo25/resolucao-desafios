class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i]){
                index = i;
                break;
            } else if ( target < nums[i]) {
                index = i;
                break;
            }
        }
        return index;
    }
};