class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int left = 0 , right = nums.size() - 1 ;
        int mid = (left + right) / 2 ; 
        sort(nums.begin() , nums.end());
        return nums[mid]; 
    }
};