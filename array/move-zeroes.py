class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        slow=0
        fast=0
        while fast<len(nums):
            if nums[fast]!=0:
                nums[slow]=nums[fast]
                slow+=1
            fast+=1
        while slow<len(nums):
            nums[slow]=0
            slow+=1
            # we can kill the question just by skiping the element of zero and noting the number of the 0 while travesal the array,then just fill 0 in the end of the array.