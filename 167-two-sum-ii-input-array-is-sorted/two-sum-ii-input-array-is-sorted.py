class Solution(object):
    def twoSum(self, numbers, target):
        first = 0
        second = len(numbers) - 1

        while first < second:
            current_sum = numbers[first] + numbers[second]

            if current_sum == target:
                return [first+1, second+1]
            elif current_sum < target:
                first += 1
            else:
                second -= 1