class Solution {
public:

    bool isUgly(int n) {
        std::unordered_set<int> allowedFactors = {2, 3, 5};
        for(int factor:allowedFactors){
            while(n%factor==0){
                n/=factor;
            }
        }
        return n==1;     
        
    }
};