class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t): return False 
        dict1 = {}
        dict2 = {}
        for c in s:
            if c in dict1:
                dict1[c] += 1
            else:
                dict1[c] = 1
        for c in t:
            if c in dict2:
                dict2[c] += 1
            else:
                dict2[c] = 1
        return dict1 == dict2
