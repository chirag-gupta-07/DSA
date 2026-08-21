class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp=0;
        long long int n=x;
        if(x<0){
            return false;
        }
        while(n!=0){
            temp= (temp*10)+n%10;
            n=n/10;
        }

        if(temp==x){
            return true;
        }else{
            return false;
        }
        
    }
};