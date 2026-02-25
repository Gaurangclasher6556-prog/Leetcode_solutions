class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        
        sorted(freq)
        return [item[0] for item in freq.most_common(k)]
