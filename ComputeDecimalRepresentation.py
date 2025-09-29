class Solution:
    def decimalRepresentation(self, n: int) -> list[int]:
        ans = []
        permuta = 0

        while n > 0:
            if n % 10 > 0:
                ans.append((n % 10) * (10**permuta))
            n //= 10
            permuta += 1
        ans.reverse()   
        return ans

solutionTest = Solution()

valueTest = 537

print(solutionTest.decimalRepresentation(valueTest))

