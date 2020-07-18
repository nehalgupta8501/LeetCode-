class Solution(object):
    def reverseOnlyLetters(self, S):
        """
        :type S: str
        :rtype: str
        """
        lst=[]
        j=len(S)-1
        for i,ch in enumerate(S):
            if ch.isalpha():
                while not S[j].isalpha():
                    j-=1
                lst.append(S[j])
                j-=1
            else:
                lst.append(ch)
        return "".join(lst)