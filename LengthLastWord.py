class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if(s.split()):
            lst=s.split()
            last=lst[-1]
            return len(last)
        return 0
        