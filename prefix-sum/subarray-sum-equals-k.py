class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        count=0
        current_sum=0
        # map_presum 记录前缀和出现的次数
        map_presum={0:1}
        for num in nums:
            current_sum+=num
            # 2. 检查哈希表中是否存在历史前缀和等于 current_sum - k
            if current_sum-k in map_presum:
                count+=map_presum[current_sum-k]
            map_presum[current_sum]=map_presum.get(current_sum,0)+1
        return count