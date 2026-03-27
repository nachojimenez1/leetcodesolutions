class Solution(object):
    def longestConsecutive(self, nums):
        if len(nums) == 0:
            return 0
        
        nums_sorted = sorted(set(nums)) 
        
        count = 1
        max1 = 1

        for i in range(1, len(nums_sorted)):
            if nums_sorted[i] - nums_sorted[i-1] == 1:
                count += 1
                max1 = max(max1, count)
            else:
                count = 1

        return max1