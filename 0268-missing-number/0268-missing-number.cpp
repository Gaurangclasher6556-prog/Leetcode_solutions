class Solution {
public:
    int missingNumber(vector<int>& nums){ 
    int n = nums.size();
    int total = (n*(n+1))/2 ;
    int sum = 0 , num ; 
    for(int i = 0 ; i < nums.size(); i++)
    {
        sum += nums[i] ;
    }

    num = total - sum ; 
    return num ;
        
    }
};