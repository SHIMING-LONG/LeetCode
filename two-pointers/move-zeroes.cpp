class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slowindex=0;
        for(int fastindex=0; fastindex<nums.size(); fastindex++){
            if (nums[fastindex]!=0){
                swap(nums[slowindex], nums[fastindex]);
                slowindex++;
            }
        }
      
        
    }
};