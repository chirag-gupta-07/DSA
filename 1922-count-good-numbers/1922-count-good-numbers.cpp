class Solution {
public:
    int power(long long n,long long i){
        long long MOD = 1000000007;
        if(i==0){
            return 1;
        }

        long long half = power(n,i/2);
        half = ( half*half ) % MOD;

        if(i%2==1){
            half = (half * n) % MOD;
        }

        return half;

    }
    int countGoodNumbers(long long n) {
        long long ans = power(5,(n+1)/2) % 1000000007;
        ans = (ans * power(4,n/2)) % 1000000007;

        return ans;
    }
};