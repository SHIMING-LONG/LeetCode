class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        # double pointer
        max_area=0
        left=0
        right=len(height)-1
        # Area=min(height[i],height[j])×(j−i)
        while left<right:
            area=min(height[left],height[right])*(right-left)
            # update max area
            max_area=max(max_area, area)
            if (height[left]<height[right]):
                left+=1
            else:
                right-=1
        return max_area

        