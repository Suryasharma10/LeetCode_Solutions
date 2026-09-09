class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n<=999){
            return 0;
        }
        if(n>999){
            ans+= n-1000+1;
        }
        if(n>999999){
            ans+=n-1000000+1;
        }
        if(n>999999999){
            ans+= n-1000000000+1;
        }
        if(n>999999999999){
            ans+= n-1000000000000+1;
        }
        if(n>999999999999999){
            ans+= n-1000000000000000+1;
        }
        return ans;
    }
};