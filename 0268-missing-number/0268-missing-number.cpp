class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 , n = nums.size() ;
        int num ; 
        sum = (n*(n+1))/2; 
        int sum1 = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            sum1 = sum1 + nums[i] ; 
        } 
        
        num = sum - sum1 ; 
        return num ;

    
        
    }
};