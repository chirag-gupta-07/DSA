class Solution {
public:
    int reverse(int x) {
        bool b = (x<0);
        long long n = x;
        n=abs(n);

        long long t=0;
        while(n>0){
            long long temp = n%10;
            n/=10;
            t=(t*10) + temp;
        }

        if(b){
            t = -1*(t);
        }

        if (t > INT_MAX || t < INT_MIN) {
            return 0;
        }

        return (int)t;

    }
};