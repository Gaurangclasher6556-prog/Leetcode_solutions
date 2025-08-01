class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > psf ; 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int k = nums[i] ; 
            int rem = target - k ; 
            if(psf.find(rem) != psf.end())
            {
                return {psf[rem] , i };
            }
            psf[k] = i ; 
        }
        return {};
    }
};