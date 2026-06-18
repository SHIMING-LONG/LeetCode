    
class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        n=len(nums)
        closest_sum=nums[0]+nums[1]+nums[2]
        for i in range(n):
            left=i+1
            right=n-1
            while left<right:
                sum=nums[i]+nums[left]+nums[right]
                if sum==target:
                    return target
                if (abs(sum-target))<abs(closest_sum-target):
                    closest_sum=sum
                if sum>target:
                    right-=1
                else:
                    left+=1
        return closest_sum
