class Solution {
public:
   
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // 1. 定义那个“抽屉柜”
        // 标签是 string，抽屉里装的是一堆 string
        unordered_map<string, vector<string>> mp;
        for(string s: strs){
            string label=s;
            sort(label.begin(),label.end());
            mp[label].push_back(s);
        }
        vector<vector<string>> result;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            // it->second 就是抽屉里的那个 vector（那一组单词）
            result.push_back(it->second);
        }
        return result;
        
    }
};