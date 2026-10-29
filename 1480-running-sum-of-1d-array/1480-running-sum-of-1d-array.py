class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        runningsum=[]
        sumi=0

        for i in range(len(nums)):
            sumi+=nums[i]
            runningsum.append(sumi)
        return runningsum
        