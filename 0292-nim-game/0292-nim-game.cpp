class Solution {
public:
    bool canWinNim(int n) {
        //1,2,3,5,6,7,9->You
        //4,8

        return n%4!=0;
    }
};