class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slowindex=0;
        for(int fastindex=0; fastindex<nums.size(); fastindex++){
            if (nums[fastindex]!=0){
                
                nums[slowindex]=nums[fastindex];
                slowindex++;

            }
        }
        for (int i=slowindex; i<nums.size();i++){
            nums[i]=0;
        }
        
    }
};