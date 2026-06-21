class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        # 字母异位词是通过重新排列不同单词或短语的字母而形成的单词或短语，并使用所有原字母一次。
        seen={}
        for s in strs:
            key=''.join(sorted(s))
            if key not in seen:
                seen[key]=[]
            seen[key].append(s)
        return list(seen.values())
        