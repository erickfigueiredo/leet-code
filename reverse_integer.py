# Autor: Erick Figueiredo
# Problem link: https://leetcode.com/problems/reverse-integer/


class Solution:
    def reverse(self, x: int) -> int:
        num = str(x)
        res=''
        if num[0] == '-':
            num = num[1:]
            res = '-'
            
        res += num[::-1]
            
        res = int(res)
        return 0 if res > 2**31-1 or res < -2**31 else res
