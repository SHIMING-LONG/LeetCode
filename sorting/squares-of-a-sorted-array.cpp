class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int n=nums.size();
    
        vector<int> results(n); // Create a new vector to store squares
        int i=n-1;
       
        while(left<=right){
            int leftnodes=nums[left]*nums[left];
            int rightnodes=nums[right] * nums[right];
            if (leftnodes<=rightnodes){
                results[i]=rightnodes;
                right--;
            }
            else if(leftnodes>rightnodes){
                results[i]=leftnodes;
                left++;
            }
            i--;
        }

        return results;
        }
             
    };
