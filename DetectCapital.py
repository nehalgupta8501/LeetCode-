class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        for i in range(0, len(word)):
            if(word.islower()): return True
            if(word.isupper()): return True
            if word[i].isupper() and i!=0:
                return False
        return True


