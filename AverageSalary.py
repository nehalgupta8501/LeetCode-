class Solution:
    def average(self, salary: List[int]) -> float:
        maxi=max(salary)
        mini=min(salary)
        sum=0
        for i in salary:
            if not (i==maxi or i==mini):
                sum=sum+i
        return sum/(len(salary)-2)