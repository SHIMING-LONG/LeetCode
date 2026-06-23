class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # 最大子数组和 = 前缀和数组中，某个位置之后的最大值减去之前的最小值
        max_sum=float('-inf')
        min_sum=0
        current_sum=0
        for num in nums:
            current_sum+=num
            max_sum=max(max_sum,current_sum-min_sum)
            min_sum=min(min_sum,current_sum)
        return max_sum