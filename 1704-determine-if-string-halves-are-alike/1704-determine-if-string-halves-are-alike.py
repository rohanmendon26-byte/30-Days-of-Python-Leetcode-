class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowel="aeiouAEIOU"
        n=len(s)

        first=s[:n//2]
        second=s[n//2:]

        count1=0
        count2=0

        for ch in first:
            if ch in vowel:
                count1+=1
        
        for ch in second:
            if ch in vowel:
                count2+=1

        return count1==count2