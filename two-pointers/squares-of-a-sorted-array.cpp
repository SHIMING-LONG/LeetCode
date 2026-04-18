class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int i=0; 
        int j=n-1;
        int pos=n-1;
        while(i<=j){
            if ((nums[i]*nums[i])<(nums[j]*nums[j])){
                res[pos]=(nums[j]*nums[j]);
                j--;
            }else{
                res[pos]=(nums[i]*nums[i]);
                i++;
            }
            pos--;
        }
        return res;
             
    }
};