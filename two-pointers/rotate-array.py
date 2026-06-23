class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        if n==0:
            return 
        k=k%n
        if k==0:
            return
        slow=0
        fast=0
        for _ in range(k):
            fast+=1
        while fast<n-1:
            slow+=1
            fast+=1
        # 此时 slow 指向的位置就是断点
        # nums[0..slow] 是前半部分，nums[slow+1..n-1] 是后半部分
        def reverse(left,right):
            while left<right:
                nums[left],nums[right]=nums[right],nums[left]
                left+=1
                right-=1
         # 反转整个数组
        reverse(0,n-1)
        # 反转前k个元素
        reverse(0,k-1)
        # 反转剩余的元素
        reverse(k,n-1)