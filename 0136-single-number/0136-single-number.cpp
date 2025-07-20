class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int u ; 
        map < long long ,  int > mpp ; 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mpp[nums[i]]++ ; 
        }
        for(auto it : mpp)
        {
            if(it.second == 1 )
            {
                 u =  it.first ; 
            }
        }
        return u ; 
    }
};