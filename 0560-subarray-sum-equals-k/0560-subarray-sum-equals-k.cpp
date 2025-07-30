class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int >pfs ; 
        int sum = 0 , count = 0 ; 
        pfs[0] = 1 ; 
        for(int i = 0 ; i <nums.size(); i++)
        {
            sum += nums[i];
            int rem = sum - k ; 
            if(pfs.find(rem) != pfs.end())
            {
                count += pfs[rem];
            }
            pfs[sum]++ ; 
        }
        return count ; 
    }
};