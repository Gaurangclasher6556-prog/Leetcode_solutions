class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0 ;
        int sum = 0 ; 
        unordered_map<int , int > psf ;
        psf[0] = 1; 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum += nums[i] ; 
            int rem = sum - k ;
            if(psf.find(rem) != psf.end())
            {
                count += psf[rem]; 
            }
            psf[sum]++ ; 
        }
        return count ; 
    }
};