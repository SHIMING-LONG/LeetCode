class Solution {
public:
    // 取数值各个位上的单数之和
    int getsum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num>=10){
            num=getsum(num);
        }
        return num;
        
    }
};