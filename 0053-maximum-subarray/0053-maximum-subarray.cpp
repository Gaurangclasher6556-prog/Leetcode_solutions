class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub = nums[0] ; 
        int sum = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++)
        {

            if(sum < 0 )
            {
                sum = 0 ;
            }
            sum += nums[i]; 
            maxsub = max(maxsub , sum);
           
        }
        return maxsub ; 
    }
};