from collections import Counter, defaultdict
class Solution:
    def majorityFrequencyCharacters(self, s: str) -> str:
        fr = Counter(s)
        fr2 = defaultdict(list)

        for c, count in fr.items():
            fr2[count].append(c)
        
        best= -1
        ans = ""

        for k in sorted(fr2.keys(), key=lambda x: -x):

            if len(fr2[k]) > best:
                best = len(fr2[k])
                ans = "".join(fr2[k])
        return ans


solutionTest = Solution()
print(solutionTest.majorityFrequencyCharacters("abababacde"))  # Output: "abcde"