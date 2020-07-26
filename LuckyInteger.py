from collections import Counter
class Solution:
    def findLucky(self, arr: List[int]) -> int:
        lst=[]
        x=dict(Counter(arr))
        for k,v in x.items():
            if(k==v):
                lst.append(k)
        if len(lst)==0:
            return -1
        return max(lst)