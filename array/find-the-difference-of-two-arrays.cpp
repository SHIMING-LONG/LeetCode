class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<vector<int>> result(2);
        // 2. 找出在 set1 中但不在 set2 中的元素
        for(int num:set1){
            if (set2.find(num)==set2.end()){
                result[0].push_back(num);
            }

        }
        // 3. 找出在 set2 中但不在 set1 中的元素
        for(int num:set2){
            if (set1.find(num)==set1.end()){
                result[1].push_back(num);
            }
        }
        return result;


        
    }
};