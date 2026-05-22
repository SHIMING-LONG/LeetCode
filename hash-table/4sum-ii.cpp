class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
       unordered_map<int,int> seen;
       int count=0;
       // 第一步：枚举前两个数组的所有组合
       for(int i=0; i<nums1.size(); i++){
        for(int j=0;j<nums2.size();j++){
            seen[nums1[i]+nums2[j]]++; //把这两个数的和出现的次数加1
        }
       }
       for(int k=0; k<nums3.size();k++){
        for(int l=0;l<nums4.size();l++){
            int complement=-(nums3[k]+nums4[l]);
            if (seen.count(complement)){
                count +=seen[complement];
            }
        }
       }
       return count;

    }
};