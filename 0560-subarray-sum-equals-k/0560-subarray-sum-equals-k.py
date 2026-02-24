class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        res = 0 
        currsum = 0 
        psm = { 0 : 1}
        for n in nums:
            currsum += n 
            diff = currsum - k

            res += psm.get(diff,0)
            psm[currsum] = 1 + psm.get(currsum,0) 

        return res    