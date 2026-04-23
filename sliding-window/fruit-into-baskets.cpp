class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0 ;// start point
        int j=0; // ending point
        int length =0; // length of sliding window
        int ln=fruits[j]; // ending position also has a kink of fruit
        int rn=fruits[i]; // starting position has a kind of fruits
        while(i<fruits.size()){
            if (fruits[i]==ln || fruits[i]==rn){
                length=max(length, i-j+1);
                i++;
            }
            else{
                j=i-1;
                ln=fruits[j];
                while(j>=1&&fruits[j-1]==ln){j--;}
                rn=fruits[i];
                length=max(length, i-j+1);
                i++;
            }
        }
        return length;
        
    }
};