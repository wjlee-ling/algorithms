class Solution:
    def canSeePersonsCount(self, heights):
        res = [0] * len(heights)
        stack = []
        for i, v in enumerate(heights):
            while stack and heights[stack[-1]] <= v:
                res[stack.pop()] += 1
            if stack:
                res[stack[-1]] += 1
            stack.append(i)
        return res
            
    # time limit exceeded
    # def canSeePersonsCount(self, heights: List[int]) -> List[int]:
    #     answers = [0] * len(heights)
    #     for i in range(len(heights)):
    #         stack = []
    #         for j in range(i+1, len(heights)):
    #             new = heights[j]
    #             if len(stack) > 0 and stack[-1] >= new:
    #                 continue
    #             stack.append(new)
    #             if new > heights[i]:
    #                 break
    #         answers[i] = len(stack)
    #     return answers
                    