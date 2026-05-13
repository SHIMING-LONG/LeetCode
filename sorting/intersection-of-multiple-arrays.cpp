class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        // 如果一个数字在所有的数组中都出现了，那么它总共出现的次数，一定正好等于数组的总个数
        vector<int> result;
        int count[1001]={0};
        int n=nums.size();
        // 2. 遍历 2D 数组中的每一个数字
        for(const auto& row : nums){
            for(int num:row){
                count[num]++;
            }
        }
        // 3. 检查哪个数字出现的次数等于数组总数 n
        for(int i=0; i<1001; i++){
            if(count[i]==n){
                result.push_back(i);
            }
        }
        return result;

    }
};