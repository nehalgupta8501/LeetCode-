def detectCapitalUse(word):
        for i in range(0, len(word)):
            if(word.islower()): return True
            if(word.isupper()): return True
            if(i!=0 and word[i].isupper()):
                return False
        return True
inp=str(input("Enter string: "))
print(detectCapitalUse(inp))