class Solution(object):
    def topKFrequent(self, nums, k):
        counter = {}

        for i in nums:
            if i in counter:
                counter[i] += 1
            else:
                counter[i] = 1

        result = []
        while k > 0:
            key = None
            max = -1
            for j in counter.keys():
                if max < counter[j]:
                    max = counter[j]
                    key = j

            del counter[key]
            result.append(key)
            k -= 1

        return result