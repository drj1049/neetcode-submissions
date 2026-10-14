class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        freqs = {}
        freqt = {}
        for ls in s:
            if ls in freqs:
                freqs[ls]+=1
            else:
                freqs[ls]=1
        for lt in t:
            if lt in freqt:
                freqt[lt]+=1
            else:
                freqt[lt]=1
        return freqs==freqt;
        