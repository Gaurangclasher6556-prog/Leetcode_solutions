class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int > psc ; 
        int count = 0 ; 
        int sum = 0 ; 
        
        psc[0] = 1; // ✅ Important: to handle sum == k at the beginning
        
        for(int num : nums) {
            sum += num ; 
            
            if(psc.find(sum - k) != psc.end()) {
                count += psc[sum - k];
            }
            
            psc[sum]++ ; 
        }
        
        return count ; 
    }
};
