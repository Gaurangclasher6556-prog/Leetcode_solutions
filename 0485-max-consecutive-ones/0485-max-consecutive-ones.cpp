class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0 ;
        int cont = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 1)
            {
                cont++ ; 
                maxi = max(maxi , cont);
            }
            else
            {
                cont = 0 ; 
            }
        }
        return maxi ; 
    }
};