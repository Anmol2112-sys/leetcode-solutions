class Solution {
public:
    int arrangeCoins(int n) {
       long long sum=0;
        int i=0;
        while(sum+i+1<=n){
            i++;
            sum=sum+i;
        }
        return i;
    }
};