class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)

        for word in strs:
            # Use character frequency (Counter) as key
            key = tuple(sorted(Counter(word).items()))
            groups[key].append(word)

        return list(groups.values())