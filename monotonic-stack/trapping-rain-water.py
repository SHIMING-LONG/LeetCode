class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left=0
        right=len(height)-1
        area=0
        h=1
        while left<=right:
            while left<=right and height[left]<h:
                left+=1
            while left<=right and height[right]<h:
                right-=1
            area+=right-left+1
            h+=1
        return area-sum(height)

        "将实例图中的蓝色也看成实心的，算出每一层的面积，加起来，然后减去height的总和，剩下的就是水量。定义一个双指针，以及层数h=1，双指针在两头往中间移动，只要指针大于等于h，就停下来目的：当两边指针都停下来的时候，计算第一层的面积（直接左指针减右指针+1），然后h++计算第二层的面积，以此类推计算每一层的面积，然后用这个面积减去height的和，剩下的就是水量了"