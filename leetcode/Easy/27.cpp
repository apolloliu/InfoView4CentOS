// 双指针
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, j;
        for(i = 0, j = 0; j < nums.size(); j++){
            if(nums[j] != val)
                nums[i++] = nums[j];
        }
        return i;
    }
};
