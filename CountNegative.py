class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        count = 0
        for num in grid:
            for n in num:
                if n < 0:
                    count += 1
        return count
