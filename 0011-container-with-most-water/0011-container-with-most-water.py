from typing import List

class Solution:
    def maxArea(self, height: List[int]) -> int:
        left, right = 0, len(height) - 1
        res = 0

        while left < right:
            # Calculate area
            area = (right - left) * min(height[left], height[right])
            res = max(res, area)

            # Move the smaller line inward
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1

        return res
