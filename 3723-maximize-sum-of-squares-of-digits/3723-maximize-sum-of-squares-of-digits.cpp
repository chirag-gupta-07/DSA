class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s = "";
        while(num){
            int t = min(sum,9);
            s+=('0'+t);
            sum-=t;
            num--;
        }

        if(sum==0){
            return s;
        }else{
            return "";
        }
        

    }
};