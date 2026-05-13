class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // non-decreasing order无需排序
        // 双指针法会很快
        int i=0; // nums1
        int j=0; //nums2
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
        }
        return -1;

    }
};