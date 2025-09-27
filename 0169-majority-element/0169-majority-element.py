class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = {}
        res , Maxcount = 0 ,0
        for n in nums:
            count[n] = 1 + count.get(n,0)
            res = n if count[n] > Maxcount else res 
            Maxcount = max(count[n],Maxcount)
        return res     
        