class Solution {
public:

    bool isUgly(int n) {
        if (n <= 0) return false;
        std::unordered_set<int> factors = {2, 3, 5};
        for(int f: factors){
            while(n%f==0){
                n/=f;
            }
        }
        return n==1;     
        
    }
};