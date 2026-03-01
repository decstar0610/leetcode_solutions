class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        if(n==1)return 1;

        for(int i=1;i<=n;i++){
        if(n>=i){
            count++;
            n=n-i;
        }
        else{
            break;
        }
        }
        return count;
    }
};