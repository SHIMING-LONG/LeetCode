class Solution {
public:
// 辅助函数，找异位词
    bool isAnagram(string s, string t) {
        int record[26]={0};
        for(int i=0; i<s.size();i++){
            record[s[i]-'a']++;
        }
        for(int i=0; i<t.size();i++){
            record[t[i]-'a']--;
        }
        for (int i=0; i<26; i++){
            if (record[i]!=0){
                return false;
            }
            
        }
        return true;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        // 1. 把第一个单词放进去，因为它前面没有单词可以对比
        result.push_back(words[0]);
        for(int i=0; i<words.size(); i++){
            // 拿当前的 words[i] 和 结果集里最后存进去的那个单词比
            // 注意：result.back() 永远代表当前“存活”的最右边那个单词
            if(!isAnagram(words[i],result.back())){
                result.push_back(words[i]);
            }
        }
        return result;     
        
    }
};