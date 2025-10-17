class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        # Use nlargest() to get top k by frequency
        return [item for item, count in heapq.nlargest(k, freq.items(), key=lambda x: x[1])]