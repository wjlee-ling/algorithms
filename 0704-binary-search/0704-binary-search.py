class Solution:
    def search(self, nums: List[int], target: int) -> int:
        lower = 0
        upper = len(nums)-1
        while (upper >= lower):
            mid = (upper+lower)//2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                upper = mid-1
            else:
                lower = mid+1
        return -1