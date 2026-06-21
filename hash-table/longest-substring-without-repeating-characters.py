class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        slow=0
        max_length=0
        hashtable=set()
        for fast in range(len(s)):
            while s[fast] in hashtable:
                hashtable.remove(s[slow])
                slow+=1
            hashtable.add(s[fast])
            max_length=max(max_length,fast-slow+1)
        return max_length
        