class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        table = [0] * 101
        best = 0
        for num in nums:
            table[num] += 1
            best = max(table)
        total = 0
        for t in table:
            if t == best: total += t
        return total
