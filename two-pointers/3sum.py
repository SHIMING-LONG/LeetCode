class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result=[]
        nums.sort() #排序
        for i in range(len(nums)):
            if nums[i]>0:
                return result
            if i>0 and nums[i]==nums[i-1]:
                continue #i去重
            left=i+1
            right=len(nums)-1
            while left<right:
                sum=nums[i]+nums[left]+nums[right]
                if sum>0:
                    right-=1 # sum > 0,说明加起来太大了,要把和变小 → right 左移
                elif sum<0:
                    left+=1 # sum < 0,说明加起来太小了,要把和变大 → left 右移
                else:
                    result.append([nums[i],nums[left],nums[right]])
                    while left<right and nums[left]==nums[left+1]:
                        left+=1 # left去重
                    while left<right and nums[right]==nums[right-1]:
                        right-=1 # right去重
                    left+=1
                    right-=1
        return result
        