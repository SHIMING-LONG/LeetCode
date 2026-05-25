class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 有序”和“O(1) 空间
        // non-decreasing order
        auto left = numbers.begin();
        auto right = numbers.end() - 1; // 指向最后一个元素
        while(left<right){
            int sum = *left + *right;
            if (sum<target){
                left++;
            }
            if(sum>target){
                right--;
            }
            if (sum==target){
                int idx1 = distance(numbers.begin(), left) + 1;int idx2 = distance(numbers.begin(), right) + 1;return {idx1, idx2};
            }

        }
        return {};      
    }
};