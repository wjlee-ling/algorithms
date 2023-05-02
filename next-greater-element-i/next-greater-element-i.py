class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d = dict()
        # loop over nums2 from the end and store the next biggest
        stack = [] # in decreasing order
        for num in nums2:
            while stack and stack[-1] < num:
                ele = stack.pop()
                d[ele] = num # ele 이후 요소 중 ele 보다 큰 값
            stack.append(num)
        # add element w/o greater ele
        while stack:
            d[stack.pop()] = -1
        
        # loop over nums1 and query dict 'd'
        ans = [d[num] for num in nums1]
        return ans;