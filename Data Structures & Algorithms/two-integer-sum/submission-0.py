class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dc = {}
        for i in range(len(nums)):
            difference = target - nums[i]
            if difference in dc:
                return [dc[difference], i]
            dc[nums[i]] = i
