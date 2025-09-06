class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int n=i;
            bool is=true;
            while(n){
                int digit=n%10;
                if(digit==0||i%digit){
                    is=false;
                    break;
                }
                n=n/10;
            }
            if(is) ans.push_back(i);
        }
        return ans;
    }
};