class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        psm = {}
        for i , n in enumerate(nums):
            dif = target - n 
            if dif in psm:
                return [psm[dif], i]
            psm[n] = i     
        