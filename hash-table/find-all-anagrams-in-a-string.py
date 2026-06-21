class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        # 字母异位词是通过重新排列不同单词或短语的字母而形成的单词或短语，并使用所有原字母一次。
        ls=len(s)
        lp=len(p)
        if ls<lp:
            return []
        res=[]
        # p_count 记录字符串 p 的字符频次
        # s_count 记录当前滑动窗口内字符的频次
        p_count=[0]*26
        s_count=[0]*26
        for i in range(lp):
            s_count[ord(s[i])-ord('a')]+=1
            p_count[ord(p[i])-ord('a')]+=1
        if s_count==p_count:
            res.append(0)
        for i in range(lp,ls):
            # 1. 新字符进入窗口
             s_count[ord(s[i])-ord('a')]+=1
             # 2. 旧字符移出窗口 (索引为 i - p_len 的字符)
             s_count[ord(s[i-lp])-ord('a')]-=1
             if s_count==p_count:
                res.append(i-lp+1)
        return res



        