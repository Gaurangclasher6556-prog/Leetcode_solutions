class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l, r = 1, max(piles)  # possible speeds: 1 banana/hour → max(pile) bananas/hour
        res = r               # start with maximum speed as the upper bound

        while l <= r:
            k = (l + r) // 2  # middle speed
            hours = 0
            for p in piles:
                hours += math.ceil(p / k)  # time to finish each pile at speed k

            if hours <= h:
                # she can finish → try slower speed
                res = k
                r = k - 1
            else:
                # too slow → increase speed
                l = k + 1

        return res