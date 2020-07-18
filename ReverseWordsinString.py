class Solution(object):
    
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        lst=s.split()
        res=""
        for word in lst:
            res+=word[: : -1]
            res+=" "
        return res.rstrip()


