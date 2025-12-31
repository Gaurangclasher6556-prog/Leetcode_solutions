class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        psm = {}
        for i , n in enumerate (nums):
            diff = target - n 
            if diff in psm:
                return[psm[diff],i]
            psm[n] = i    

        