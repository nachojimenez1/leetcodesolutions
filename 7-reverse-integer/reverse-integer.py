class Solution(object):
    def reverse(self, x):
        sign = -1 if x < 0 else 1
        s = str(abs(x))[::-1]
        res = sign * int(s)

        if res < -2**31 or res > 2**31 - 1:
            return 0
        return res