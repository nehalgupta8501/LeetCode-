class Solution:
    def average(self, salary: List[int]) -> float:
        maxi=max(salary)
        mini=min(salary)
        sum1=sum(salary)
        sumf=sum1-maxi-mini
        return sumf/(len(salary)-2)