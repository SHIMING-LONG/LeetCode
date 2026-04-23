class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0; // the start point
        int j=0; // the ending point
        int length=0; // the window length
        int sum=0; //the sum of the window
        int result = 0; // initial
        for (;j<nums.size();j++){
            sum +=nums[j];
            while(sum>=target){ 
                length=(j-i+1);
                result=length;
                sum -=nums[i]; // the window smaller
                i++; // start point move forward

            }
        }
        if (result==INT_MAX){return 0;}
        else{return result;}
        
    }
};