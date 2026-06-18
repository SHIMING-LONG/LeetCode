class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        # 找出a + b + c = 0
        # a = nums[i], b = nums[left], c = nums[right]
        result=[]
        nums.sort()
        for i in range(len(nums)):
             # 如果第一个元素已经大于0，不需要进一步检查
            if nums[i]>0:
                return result
            #   跳过相同的元素以避免重复
            if i>0 and nums[i]==nums[i-1]:
                continue
            left=i+1
            right=len(nums)-1
            while left<right:
                sum=nums[i]+nums[left]+nums[right]
                if sum>0:
                    right-=1
                elif sum<0:
                    left+=1
                else:
                    result.append([nums[i],nums[left],nums[right]])
                    # 跳过相同的元素以避免重复
                    while left<right and nums[left]==nums[left+1]:
                        left+=1
                    while left<right and nums[right]==nums[right-1]:
                        right-=1
                    left+=1
                    right-=1
        return result

        